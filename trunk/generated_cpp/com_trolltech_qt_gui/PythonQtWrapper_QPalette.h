#ifndef PYTHONQTWRAPPER_QPALETTE_H
#define PYTHONQTWRAPPER_QPALETTE_H

#include <qpalette.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpalette.h>

class PythonQtWrapper_QPalette : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorGroup ColorRole )
enum ColorGroup{
  Active = QPalette::Active,   Disabled = QPalette::Disabled,   Inactive = QPalette::Inactive,   NColorGroups = QPalette::NColorGroups,   Current = QPalette::Current,   All = QPalette::All,   Normal = QPalette::Normal};
enum ColorRole{
  WindowText = QPalette::WindowText,   Button = QPalette::Button,   Light = QPalette::Light,   Midlight = QPalette::Midlight,   Dark = QPalette::Dark,   Mid = QPalette::Mid,   Text = QPalette::Text,   BrightText = QPalette::BrightText,   ButtonText = QPalette::ButtonText,   Base = QPalette::Base,   Window = QPalette::Window,   Shadow = QPalette::Shadow,   Highlight = QPalette::Highlight,   HighlightedText = QPalette::HighlightedText,   Link = QPalette::Link,   LinkVisited = QPalette::LinkVisited,   AlternateBase = QPalette::AlternateBase,   NoRole = QPalette::NoRole,   ToolTipBase = QPalette::ToolTipBase,   ToolTipText = QPalette::ToolTipText,   NColorRoles = QPalette::NColorRoles,   Foreground = QPalette::Foreground,   Background = QPalette::Background};
public slots:
QPalette* new_QPalette();
QPalette* new_QPalette(Qt::GlobalColor  button);
QPalette* new_QPalette(const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
QPalette* new_QPalette(const QColor&  button);
QPalette* new_QPalette(const QColor&  button, const QColor&  window);
QPalette* new_QPalette(const QPalette&  palette);
void delete_QPalette(QPalette* obj) { delete obj; } 
   void setColor(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QColor&  color);
   uint  resolve(QPalette* theWrappedObject) const;
   void setCurrentColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cg);
   void setColor(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QColor&  color);
   const QBrush&  text(QPalette* theWrappedObject) const;
   const QBrush&  linkVisited(QPalette* theWrappedObject) const;
   const QBrush&  button(QPalette* theWrappedObject) const;
   qint64  cacheKey(QPalette* theWrappedObject) const;
   void setBrush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QBrush&  brush);
   const QBrush&  toolTipText(QPalette* theWrappedObject) const;
   const QBrush&  buttonText(QPalette* theWrappedObject) const;
   void readFrom(QPalette* theWrappedObject, QDataStream&  ds);
   bool  isBrushSet(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QBrush&  base(QPalette* theWrappedObject) const;
   const QColor&  color(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   const QBrush&  window(QPalette* theWrappedObject) const;
   const QColor&  color(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QBrush&  mid(QPalette* theWrappedObject) const;
   const QBrush&  light(QPalette* theWrappedObject) const;
   void writeTo(QPalette* theWrappedObject, QDataStream&  ds);
   void setColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cr, const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
   QPalette::ColorGroup  currentColorGroup(QPalette* theWrappedObject) const;
   bool  isEqual(QPalette* theWrappedObject, QPalette::ColorGroup  cr1, QPalette::ColorGroup  cr2) const;
   const QBrush&  dark(QPalette* theWrappedObject) const;
   void resolve(QPalette* theWrappedObject, uint  mask);
   const QBrush&  toolTipBase(QPalette* theWrappedObject) const;
   QPalette  resolve(QPalette* theWrappedObject, const QPalette&  arg__1) const;
   void setBrush(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QBrush&  brush);
   const QBrush&  highlight(QPalette* theWrappedObject) const;
   const QBrush&  highlightedText(QPalette* theWrappedObject) const;
   const QBrush&  shadow(QPalette* theWrappedObject) const;
   const QBrush&  midlight(QPalette* theWrappedObject) const;
   bool  operator_equal(QPalette* theWrappedObject, const QPalette&  p) const;
   const QBrush&  brush(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   const QBrush&  alternateBase(QPalette* theWrappedObject) const;
   bool  isCopyOf(QPalette* theWrappedObject, const QPalette&  p) const;
   const QBrush&  brush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QBrush&  link(QPalette* theWrappedObject) const;
   const QBrush&  windowText(QPalette* theWrappedObject) const;
   const QBrush&  brightText(QPalette* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPALETTE_H
