#ifndef PYTHONQTWRAPPER_QLIBRARYINFO_H
#define PYTHONQTWRAPPER_QLIBRARYINFO_H

#include <qlibraryinfo.h>
#include <QObject>

#include <QVariant>

class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LibraryLocation )
enum LibraryLocation{
  PrefixPath = QLibraryInfo::PrefixPath,   DocumentationPath = QLibraryInfo::DocumentationPath,   HeadersPath = QLibraryInfo::HeadersPath,   LibrariesPath = QLibraryInfo::LibrariesPath,   BinariesPath = QLibraryInfo::BinariesPath,   PluginsPath = QLibraryInfo::PluginsPath,   DataPath = QLibraryInfo::DataPath,   TranslationsPath = QLibraryInfo::TranslationsPath,   SettingsPath = QLibraryInfo::SettingsPath,   DemosPath = QLibraryInfo::DemosPath,   ExamplesPath = QLibraryInfo::ExamplesPath};
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; } 
   QString  static_QLibraryInfo_buildKey();
   QString  static_QLibraryInfo_licensedProducts();
   QString  static_QLibraryInfo_licensee();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1);
};

#endif // PYTHONQTWRAPPER_QLIBRARYINFO_H
