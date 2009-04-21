#include "PythonQtWrapper_QPixmapCache.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpixmap.h>

QPixmapCache* PythonQtWrapper_QPixmapCache::new_QPixmapCache()
{ 
return new PythonQtShell_QPixmapCache(); }

int  PythonQtWrapper_QPixmapCache::static_QPixmapCache_cacheLimit()
{
return QPixmapCache::cacheLimit();
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_remove(const QString&  key)
{
QPixmapCache::remove(key);
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_insert(const QString&  key, const QPixmap&  arg__2)
{
return QPixmapCache::insert(key, arg__2);
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_setCacheLimit(int  arg__1)
{
QPixmapCache::setCacheLimit(arg__1);
}

bool  PythonQtWrapper_QPixmapCache::static_QPixmapCache_find(const QString&  key, QPixmap&  arg__2)
{
return QPixmapCache::find(key, arg__2);
}

void PythonQtWrapper_QPixmapCache::static_QPixmapCache_clear()
{
QPixmapCache::clear();
}

