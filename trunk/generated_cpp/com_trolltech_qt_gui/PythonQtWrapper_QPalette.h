#ifndef PYTHONQTWRAPPER_QPALETTE_H
#define PYTHONQTWRAPPER_QPALETTE_H

#include <qpalette.h>
#include <QObject>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpalette.h>

class PythonQtWrapper_QPalette : public QObject
{ Q_OBJECT
public:
public slots:
QPalette* new_QPalette();
QPalette* new_QPalette(Qt::GlobalColor  button);
QPalette* new_QPalette(const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
QPalette* new_QPalette(const QColor&  button);
QPalette* new_QPalette(const QColor&  button, const QColor&  window);
QPalette* new_QPalette(const QPalette&  palette);
void delete_QPalette(QPalette* obj) { delete obj; } 
   const QBrush&  alternateBase(QPalette* theWrappedObject) const;
   const QBrush&  base(QPalette* theWrappedObject) const;
   const QBrush&  brightText(QPalette* theWrappedObject) const;
   const QBrush&  brush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QBrush&  brush(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   const QBrush&  button(QPalette* theWrappedObject) const;
   const QBrush&  buttonText(QPalette* theWrappedObject) const;
   qint64  cacheKey(QPalette* theWrappedObject) const;
   const QColor&  color(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QColor&  color(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   QPalette::ColorGroup  currentColorGroup(QPalette* theWrappedObject) const;
   const QBrush&  dark(QPalette* theWrappedObject) const;
   const QBrush&  highlight(QPalette* theWrappedObject) const;
   const QBrush&  highlightedText(QPalette* theWrappedObject) const;
   bool  isBrushSet(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   bool  isCopyOf(QPalette* theWrappedObject, const QPalette&  p) const;
   bool  isEqual(QPalette* theWrappedObject, QPalette::ColorGroup  cr1, QPalette::ColorGroup  cr2) const;
   const QBrush&  light(QPalette* theWrappedObject) const;
   const QBrush&  link(QPalette* theWrappedObject) const;
   const QBrush&  linkVisited(QPalette* theWrappedObject) const;
   const QBrush&  mid(QPalette* theWrappedObject) const;
   const QBrush&  midlight(QPalette* theWrappedObject) const;
   void writeTo(QPalette* theWrappedObject, QDataStream&  ds);
   bool  operator_equal(QPalette* theWrappedObject, const QPalette&  p) const;
   void readFrom(QPalette* theWrappedObject, QDataStream&  ds);
   uint  resolve(QPalette* theWrappedObject) const;
   QPalette  resolve(QPalette* theWrappedObject, const QPalette&  arg__1) const;
   void resolve(QPalette* theWrappedObject, uint  mask);
   void setBrush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QBrush&  brush);
   void setBrush(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QBrush&  brush);
   void setColor(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QColor&  color);
   void setColor(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QColor&  color);
   void setColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cr, const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
   void setCurrentColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cg);
   const QBrush&  shadow(QPalette* theWrappedObject) const;
   const QBrush&  text(QPalette* theWrappedObject) const;
   const QBrush&  toolTipBase(QPalette* theWrappedObject) const;
   const QBrush&  toolTipText(QPalette* theWrappedObject) const;
   const QBrush&  window(QPalette* theWrappedObject) const;
   const QBrush&  windowText(QPalette* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPALETTE_H
