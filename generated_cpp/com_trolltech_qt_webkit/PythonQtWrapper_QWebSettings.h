#ifndef PYTHONQTWRAPPER_QWEBSETTINGS_H
#define PYTHONQTWRAPPER_QWEBSETTINGS_H

#include <qwebsettings.h>
#include <QObject>

#include <QVariant>
#include <qicon.h>
#include <qpixmap.h>
#include <qurl.h>
#include <qwebsettings.h>

class PythonQtWrapper_QWebSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontSize WebGraphic FontFamily WebAttribute )
enum FontSize{
  MinimumFontSize = QWebSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebSettings::DefaultFontSize,   DefaultFixedFontSize = QWebSettings::DefaultFixedFontSize};
enum WebGraphic{
  MissingImageGraphic = QWebSettings::MissingImageGraphic,   MissingPluginGraphic = QWebSettings::MissingPluginGraphic,   DefaultFrameIconGraphic = QWebSettings::DefaultFrameIconGraphic,   TextAreaSizeGripCornerGraphic = QWebSettings::TextAreaSizeGripCornerGraphic};
enum FontFamily{
  StandardFont = QWebSettings::StandardFont,   FixedFont = QWebSettings::FixedFont,   SerifFont = QWebSettings::SerifFont,   SansSerifFont = QWebSettings::SansSerifFont,   CursiveFont = QWebSettings::CursiveFont,   FantasyFont = QWebSettings::FantasyFont};
enum WebAttribute{
  AutoLoadImages = QWebSettings::AutoLoadImages,   JavascriptEnabled = QWebSettings::JavascriptEnabled,   JavaEnabled = QWebSettings::JavaEnabled,   PluginsEnabled = QWebSettings::PluginsEnabled,   PrivateBrowsingEnabled = QWebSettings::PrivateBrowsingEnabled,   JavascriptCanOpenWindows = QWebSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebSettings::JavascriptCanAccessClipboard,   DeveloperExtrasEnabled = QWebSettings::DeveloperExtrasEnabled,   LinksIncludedInFocusChain = QWebSettings::LinksIncludedInFocusChain};
public slots:
   void static_QWebSettings_clearIconDatabase();
   QString  fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const;
   int  fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const;
   QWebSettings*  static_QWebSettings_globalSettings();
   QString  static_QWebSettings_iconDatabasePath();
   QIcon  static_QWebSettings_iconForUrl(const QUrl&  url);
   int  static_QWebSettings_maximumPagesInCache();
   void resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr);
   void resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which);
   void resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type);
   void setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on);
   void setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family);
   void setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size);
   void static_QWebSettings_setIconDatabasePath(const QString&  location);
   void static_QWebSettings_setMaximumPagesInCache(int  pages);
   void static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity);
   void setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location);
   void static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic);
   bool  testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const;
   QUrl  userStyleSheetUrl(QWebSettings* theWrappedObject) const;
   QPixmap  static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type);
};

#endif // PYTHONQTWRAPPER_QWEBSETTINGS_H
