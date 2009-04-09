#ifndef PYTHONQTWRAPPER_QPIXMAPCACHE_H
#define PYTHONQTWRAPPER_QPIXMAPCACHE_H

#include <qpixmapcache.h>
#include <QObject>

#include <QVariant>
#include <qpixmap.h>

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  arg__2);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  arg__2);
   void static_QPixmapCache_remove(const QString&  key);
   void static_QPixmapCache_setCacheLimit(int  arg__1);
};

#endif // PYTHONQTWRAPPER_QPIXMAPCACHE_H
