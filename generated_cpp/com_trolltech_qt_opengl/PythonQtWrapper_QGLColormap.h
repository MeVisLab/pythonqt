#ifndef PYTHONQTWRAPPER_QGLCOLORMAP_H
#define PYTHONQTWRAPPER_QGLCOLORMAP_H

#include <qglcolormap.h>
#include <QObject>

#include <QVariant>
#include <qcolor.h>
#include <qglcolormap.h>

class PythonQtWrapper_QGLColormap : public QObject
{ Q_OBJECT
public:
public slots:
QGLColormap* new_QGLColormap();
QGLColormap* new_QGLColormap(const QGLColormap&  arg__1);
void delete_QGLColormap(QGLColormap* obj) { delete obj; } 
   QColor  entryColor(QGLColormap* theWrappedObject, int  idx) const;
   unsigned int  entryRgb(QGLColormap* theWrappedObject, int  idx) const;
   int  find(QGLColormap* theWrappedObject, unsigned int  color) const;
   int  findNearest(QGLColormap* theWrappedObject, unsigned int  color) const;
   bool  isEmpty(QGLColormap* theWrappedObject) const;
   void setEntries(QGLColormap* theWrappedObject, int  count, const unsigned int*  colors, int  base = 0);
   void setEntry(QGLColormap* theWrappedObject, int  idx, const QColor&  color);
   void setEntry(QGLColormap* theWrappedObject, int  idx, unsigned int  color);
   int  size(QGLColormap* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLCOLORMAP_H
