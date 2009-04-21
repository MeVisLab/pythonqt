#ifndef PYTHONQTWRAPPER_QFILEICONPROVIDER_H
#define PYTHONQTWRAPPER_QFILEICONPROVIDER_H

#include <qfileiconprovider.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qicon.h>

class PythonQtShell_QFileIconProvider : public QFileIconProvider
{
public:
    PythonQtShell_QFileIconProvider():QFileIconProvider(),_wrapper(NULL) {};

virtual QIcon  icon(QFileIconProvider::IconType  type) const;
virtual QIcon  icon(const QFileInfo&  info) const;
virtual QString  type(const QFileInfo&  info) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileIconProvider : public QFileIconProvider
{ public:
inline QIcon  promoted_icon(QFileIconProvider::IconType  type) const { return QFileIconProvider::icon(type); }
inline QString  promoted_type(const QFileInfo&  info) const { return QFileIconProvider::type(info); }
inline QIcon  promoted_icon(const QFileInfo&  info) const { return QFileIconProvider::icon(info); }
};

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
   QString  type(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
   QIcon  icon(QFileIconProvider* theWrappedObject, const QFileInfo&  info) const;
};

#endif // PYTHONQTWRAPPER_QFILEICONPROVIDER_H
