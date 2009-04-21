#ifndef PYTHONQTWRAPPER_QDESKTOPSERVICES_H
#define PYTHONQTWRAPPER_QDESKTOPSERVICES_H

#include <qdesktopservices.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qobject.h>
#include <qurl.h>

class PythonQtShell_QDesktopServices : public QDesktopServices
{
public:
    PythonQtShell_QDesktopServices():QDesktopServices(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDesktopServices : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardLocation )
enum StandardLocation{
  DesktopLocation = QDesktopServices::DesktopLocation,   DocumentsLocation = QDesktopServices::DocumentsLocation,   FontsLocation = QDesktopServices::FontsLocation,   ApplicationsLocation = QDesktopServices::ApplicationsLocation,   MusicLocation = QDesktopServices::MusicLocation,   MoviesLocation = QDesktopServices::MoviesLocation,   PicturesLocation = QDesktopServices::PicturesLocation,   TempLocation = QDesktopServices::TempLocation,   HomeLocation = QDesktopServices::HomeLocation,   DataLocation = QDesktopServices::DataLocation};
public slots:
QDesktopServices* new_QDesktopServices();
void delete_QDesktopServices(QDesktopServices* obj) { delete obj; } 
   QString  static_QDesktopServices_displayName(QDesktopServices::StandardLocation  type);
   void static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method);
   void static_QDesktopServices_unsetUrlHandler(const QString&  scheme);
   bool  static_QDesktopServices_openUrl(const QUrl&  url);
   QString  static_QDesktopServices_storageLocation(QDesktopServices::StandardLocation  type);
};

#endif // PYTHONQTWRAPPER_QDESKTOPSERVICES_H
