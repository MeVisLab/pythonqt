#include "com_trolltech_qt_core1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QDir>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qeasingcurve.h>
#include <qelapsedtimer.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qjsonarray.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlist.h>
#include <qloggingcategory.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qthread.h>
#include <qurl.h>
#include <qvector.h>

QDeferredDeleteEvent* PythonQtWrapper_QDeferredDeleteEvent::new_QDeferredDeleteEvent()
{ 
return new QDeferredDeleteEvent(); }

int  PythonQtWrapper_QDeferredDeleteEvent::loopLevel(QDeferredDeleteEvent* theWrappedObject) const
{
  return ( theWrappedObject->loopLevel());
}



QDir* PythonQtWrapper_QDir::new_QDir(const QDir&  arg__1)
{ 
return new QDir(arg__1); }

QDir* PythonQtWrapper_QDir::new_QDir(const QString&  path)
{ 
return new QDir(path); }

QDir* PythonQtWrapper_QDir::new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort, QDir::Filters  filter)
{ 
return new QDir(path, nameFilter, sort, filter); }

QString  PythonQtWrapper_QDir::absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->absoluteFilePath(fileName));
}

QString  PythonQtWrapper_QDir::absolutePath(QDir* theWrappedObject) const
{
  return ( theWrappedObject->absolutePath());
}

void PythonQtWrapper_QDir::static_QDir_addSearchPath(const QString&  prefix, const QString&  path)
{
  (QDir::addSearchPath(prefix, path));
}

QString  PythonQtWrapper_QDir::canonicalPath(QDir* theWrappedObject) const
{
  return ( theWrappedObject->canonicalPath());
}

bool  PythonQtWrapper_QDir::cd(QDir* theWrappedObject, const QString&  dirName)
{
  return ( theWrappedObject->cd(dirName));
}

bool  PythonQtWrapper_QDir::cdUp(QDir* theWrappedObject)
{
  return ( theWrappedObject->cdUp());
}

QString  PythonQtWrapper_QDir::static_QDir_cleanPath(const QString&  path)
{
  return (QDir::cleanPath(path));
}

uint  PythonQtWrapper_QDir::count(QDir* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QDir  PythonQtWrapper_QDir::static_QDir_current()
{
  return (QDir::current());
}

QString  PythonQtWrapper_QDir::static_QDir_currentPath()
{
  return (QDir::currentPath());
}

QString  PythonQtWrapper_QDir::dirName(QDir* theWrappedObject) const
{
  return ( theWrappedObject->dirName());
}

QList<QFileInfo >  PythonQtWrapper_QDir::static_QDir_drives()
{
  return (QDir::drives());
}

QList<QFileInfo >  PythonQtWrapper_QDir::entryInfoList(QDir* theWrappedObject, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryInfoList(filters, sort));
}

QList<QFileInfo >  PythonQtWrapper_QDir::entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryInfoList(nameFilters, filters, sort));
}

QStringList  PythonQtWrapper_QDir::entryList(QDir* theWrappedObject, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryList(filters, sort));
}

QStringList  PythonQtWrapper_QDir::entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryList(nameFilters, filters, sort));
}

bool  PythonQtWrapper_QDir::exists(QDir* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

bool  PythonQtWrapper_QDir::exists(QDir* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->exists(name));
}

QString  PythonQtWrapper_QDir::filePath(QDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->filePath(fileName));
}

QDir::Filters  PythonQtWrapper_QDir::filter(QDir* theWrappedObject) const
{
  return ( theWrappedObject->filter());
}

QString  PythonQtWrapper_QDir::static_QDir_fromNativeSeparators(const QString&  pathName)
{
  return (QDir::fromNativeSeparators(pathName));
}

QDir  PythonQtWrapper_QDir::static_QDir_home()
{
  return (QDir::home());
}

QString  PythonQtWrapper_QDir::static_QDir_homePath()
{
  return (QDir::homePath());
}

bool  PythonQtWrapper_QDir::isAbsolute(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isAbsolute());
}

bool  PythonQtWrapper_QDir::static_QDir_isAbsolutePath(const QString&  path)
{
  return (QDir::isAbsolutePath(path));
}

bool  PythonQtWrapper_QDir::isEmpty(QDir* theWrappedObject, QDir::Filters  filters) const
{
  return ( theWrappedObject->isEmpty(filters));
}

bool  PythonQtWrapper_QDir::isReadable(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QDir::isRelative(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

bool  PythonQtWrapper_QDir::static_QDir_isRelativePath(const QString&  path)
{
  return (QDir::isRelativePath(path));
}

bool  PythonQtWrapper_QDir::isRoot(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isRoot());
}

QChar  PythonQtWrapper_QDir::static_QDir_listSeparator()
{
  return (QDir::listSeparator());
}

bool  PythonQtWrapper_QDir::makeAbsolute(QDir* theWrappedObject)
{
  return ( theWrappedObject->makeAbsolute());
}

bool  PythonQtWrapper_QDir::static_QDir_match(const QString&  filter, const QString&  fileName)
{
  return (QDir::match(filter, fileName));
}

bool  PythonQtWrapper_QDir::static_QDir_match(const QStringList&  filters, const QString&  fileName)
{
  return (QDir::match(filters, fileName));
}

bool  PythonQtWrapper_QDir::mkdir(QDir* theWrappedObject, const QString&  dirName) const
{
  return ( theWrappedObject->mkdir(dirName));
}

bool  PythonQtWrapper_QDir::mkpath(QDir* theWrappedObject, const QString&  dirPath) const
{
  return ( theWrappedObject->mkpath(dirPath));
}

QStringList  PythonQtWrapper_QDir::nameFilters(QDir* theWrappedObject) const
{
  return ( theWrappedObject->nameFilters());
}

QStringList  PythonQtWrapper_QDir::static_QDir_nameFiltersFromString(const QString&  nameFilter)
{
  return (QDir::nameFiltersFromString(nameFilter));
}

bool  PythonQtWrapper_QDir::__ne__(QDir* theWrappedObject, const QDir&  dir) const
{
  return ( (*theWrappedObject)!= dir);
}

bool  PythonQtWrapper_QDir::__eq__(QDir* theWrappedObject, const QDir&  dir) const
{
  return ( (*theWrappedObject)== dir);
}

QString  PythonQtWrapper_QDir::operator_subscript(QDir* theWrappedObject, int  arg__1) const
{
  return ( (*theWrappedObject)[arg__1]);
}

QString  PythonQtWrapper_QDir::path(QDir* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QDir::refresh(QDir* theWrappedObject) const
{
  ( theWrappedObject->refresh());
}

QString  PythonQtWrapper_QDir::relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->relativeFilePath(fileName));
}

bool  PythonQtWrapper_QDir::remove(QDir* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->remove(fileName));
}

bool  PythonQtWrapper_QDir::removeRecursively(QDir* theWrappedObject)
{
  return ( theWrappedObject->removeRecursively());
}

bool  PythonQtWrapper_QDir::rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName)
{
  return ( theWrappedObject->rename(oldName, newName));
}

bool  PythonQtWrapper_QDir::rmdir(QDir* theWrappedObject, const QString&  dirName) const
{
  return ( theWrappedObject->rmdir(dirName));
}

bool  PythonQtWrapper_QDir::rmpath(QDir* theWrappedObject, const QString&  dirPath) const
{
  return ( theWrappedObject->rmpath(dirPath));
}

QDir  PythonQtWrapper_QDir::static_QDir_root()
{
  return (QDir::root());
}

QString  PythonQtWrapper_QDir::static_QDir_rootPath()
{
  return (QDir::rootPath());
}

QStringList  PythonQtWrapper_QDir::static_QDir_searchPaths(const QString&  prefix)
{
  return (QDir::searchPaths(prefix));
}

QChar  PythonQtWrapper_QDir::static_QDir_separator()
{
  return (QDir::separator());
}

bool  PythonQtWrapper_QDir::static_QDir_setCurrent(const QString&  path)
{
  return (QDir::setCurrent(path));
}

void PythonQtWrapper_QDir::setFilter(QDir* theWrappedObject, QDir::Filters  filter)
{
  ( theWrappedObject->setFilter(filter));
}

void PythonQtWrapper_QDir::setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters)
{
  ( theWrappedObject->setNameFilters(nameFilters));
}

void PythonQtWrapper_QDir::setPath(QDir* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

void PythonQtWrapper_QDir::static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths)
{
  (QDir::setSearchPaths(prefix, searchPaths));
}

void PythonQtWrapper_QDir::setSorting(QDir* theWrappedObject, QDir::SortFlags  sort)
{
  ( theWrappedObject->setSorting(sort));
}

QDir::SortFlags  PythonQtWrapper_QDir::sorting(QDir* theWrappedObject) const
{
  return ( theWrappedObject->sorting());
}

void PythonQtWrapper_QDir::swap(QDir* theWrappedObject, QDir&  other)
{
  ( theWrappedObject->swap(other));
}

QDir  PythonQtWrapper_QDir::static_QDir_temp()
{
  return (QDir::temp());
}

QString  PythonQtWrapper_QDir::static_QDir_tempPath()
{
  return (QDir::tempPath());
}

QString  PythonQtWrapper_QDir::static_QDir_toNativeSeparators(const QString&  pathName)
{
  return (QDir::toNativeSeparators(pathName));
}

QString PythonQtWrapper_QDir::py_toString(QDir* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(dir, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(path, filter, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(path, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters, QDirIterator::IteratorFlags  flags)
{ 
return new QDirIterator(path, nameFilters, filters, flags); }

QFileInfo  PythonQtWrapper_QDirIterator::fileInfo(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileInfo());
}

QString  PythonQtWrapper_QDirIterator::fileName(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QDirIterator::filePath(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QDirIterator::hasNext(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->hasNext());
}

QString  PythonQtWrapper_QDirIterator::next(QDirIterator* theWrappedObject)
{
  return ( theWrappedObject->next());
}

QString  PythonQtWrapper_QDirIterator::path(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->path());
}



QDynamicPropertyChangeEvent* PythonQtWrapper_QDynamicPropertyChangeEvent::new_QDynamicPropertyChangeEvent(const QByteArray&  name)
{ 
return new QDynamicPropertyChangeEvent(name); }

QByteArray  PythonQtWrapper_QDynamicPropertyChangeEvent::propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}



QEasingCurve* PythonQtWrapper_QEasingCurve::new_QEasingCurve(QEasingCurve::Type  type)
{ 
return new QEasingCurve(type); }

QEasingCurve* PythonQtWrapper_QEasingCurve::new_QEasingCurve(const QEasingCurve&  other)
{ 
return new QEasingCurve(other); }

void PythonQtWrapper_QEasingCurve::addCubicBezierSegment(QEasingCurve* theWrappedObject, const QPointF&  c1, const QPointF&  c2, const QPointF&  endPoint)
{
  ( theWrappedObject->addCubicBezierSegment(c1, c2, endPoint));
}

void PythonQtWrapper_QEasingCurve::addTCBSegment(QEasingCurve* theWrappedObject, const QPointF&  nextPoint, qreal  t, qreal  c, qreal  b)
{
  ( theWrappedObject->addTCBSegment(nextPoint, t, c, b));
}

qreal  PythonQtWrapper_QEasingCurve::amplitude(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->amplitude());
}

bool  PythonQtWrapper_QEasingCurve::__ne__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QEasingCurve::writeTo(QEasingCurve* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QEasingCurve*  PythonQtWrapper_QEasingCurve::operator_assign(QEasingCurve* theWrappedObject, const QEasingCurve&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QEasingCurve::__eq__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QEasingCurve::readFrom(QEasingCurve* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QEasingCurve::overshoot(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->overshoot());
}

qreal  PythonQtWrapper_QEasingCurve::period(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->period());
}

void PythonQtWrapper_QEasingCurve::setAmplitude(QEasingCurve* theWrappedObject, qreal  amplitude)
{
  ( theWrappedObject->setAmplitude(amplitude));
}

void PythonQtWrapper_QEasingCurve::setOvershoot(QEasingCurve* theWrappedObject, qreal  overshoot)
{
  ( theWrappedObject->setOvershoot(overshoot));
}

void PythonQtWrapper_QEasingCurve::setPeriod(QEasingCurve* theWrappedObject, qreal  period)
{
  ( theWrappedObject->setPeriod(period));
}

void PythonQtWrapper_QEasingCurve::setType(QEasingCurve* theWrappedObject, QEasingCurve::Type  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QEasingCurve::swap(QEasingCurve* theWrappedObject, QEasingCurve&  other)
{
  ( theWrappedObject->swap(other));
}

QVector<QPointF >  PythonQtWrapper_QEasingCurve::toCubicSpline(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->toCubicSpline());
}

QEasingCurve::Type  PythonQtWrapper_QEasingCurve::type(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

qreal  PythonQtWrapper_QEasingCurve::valueForProgress(QEasingCurve* theWrappedObject, qreal  progress) const
{
  return ( theWrappedObject->valueForProgress(progress));
}

QString PythonQtWrapper_QEasingCurve::py_toString(QEasingCurve* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QElapsedTimer* PythonQtWrapper_QElapsedTimer::new_QElapsedTimer()
{ 
return new QElapsedTimer(); }

QElapsedTimer::ClockType  PythonQtWrapper_QElapsedTimer::static_QElapsedTimer_clockType()
{
  return (QElapsedTimer::clockType());
}

qint64  PythonQtWrapper_QElapsedTimer::elapsed(QElapsedTimer* theWrappedObject) const
{
  return ( theWrappedObject->elapsed());
}

bool  PythonQtWrapper_QElapsedTimer::hasExpired(QElapsedTimer* theWrappedObject, qint64  timeout) const
{
  return ( theWrappedObject->hasExpired(timeout));
}

void PythonQtWrapper_QElapsedTimer::invalidate(QElapsedTimer* theWrappedObject)
{
  ( theWrappedObject->invalidate());
}

bool  PythonQtWrapper_QElapsedTimer::static_QElapsedTimer_isMonotonic()
{
  return (QElapsedTimer::isMonotonic());
}

bool  PythonQtWrapper_QElapsedTimer::isValid(QElapsedTimer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qint64  PythonQtWrapper_QElapsedTimer::msecsSinceReference(QElapsedTimer* theWrappedObject) const
{
  return ( theWrappedObject->msecsSinceReference());
}

qint64  PythonQtWrapper_QElapsedTimer::msecsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const
{
  return ( theWrappedObject->msecsTo(other));
}

qint64  PythonQtWrapper_QElapsedTimer::nsecsElapsed(QElapsedTimer* theWrappedObject) const
{
  return ( theWrappedObject->nsecsElapsed());
}

bool  PythonQtWrapper_QElapsedTimer::__ne__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QElapsedTimer::__eq__(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const
{
  return ( (*theWrappedObject)== other);
}

qint64  PythonQtWrapper_QElapsedTimer::restart(QElapsedTimer* theWrappedObject)
{
  return ( theWrappedObject->restart());
}

qint64  PythonQtWrapper_QElapsedTimer::secsTo(QElapsedTimer* theWrappedObject, const QElapsedTimer&  other) const
{
  return ( theWrappedObject->secsTo(other));
}

void PythonQtWrapper_QElapsedTimer::start(QElapsedTimer* theWrappedObject)
{
  ( theWrappedObject->start());
}



PythonQtShell_QEvent::~PythonQtShell_QEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QEvent* PythonQtWrapper_QEvent::new_QEvent(QEvent::Type  type)
{ 
return new PythonQtShell_QEvent(type); }

QEvent* PythonQtWrapper_QEvent::new_QEvent(const QEvent&  other)
{ 
return new PythonQtShell_QEvent(other); }

void PythonQtWrapper_QEvent::accept(QEvent* theWrappedObject)
{
  ( theWrappedObject->accept());
}

void PythonQtWrapper_QEvent::ignore(QEvent* theWrappedObject)
{
  ( theWrappedObject->ignore());
}

bool  PythonQtWrapper_QEvent::isAccepted(QEvent* theWrappedObject) const
{
  return ( theWrappedObject->isAccepted());
}

QEvent*  PythonQtWrapper_QEvent::operator_assign(QEvent* theWrappedObject, const QEvent&  other)
{
  return &( (*theWrappedObject)= other);
}

int  PythonQtWrapper_QEvent::static_QEvent_registerEventType(int  hint)
{
  return (QEvent::registerEventType(hint));
}

void PythonQtWrapper_QEvent::setAccepted(QEvent* theWrappedObject, bool  accepted)
{
  ( theWrappedObject->setAccepted(accepted));
}

bool  PythonQtWrapper_QEvent::spontaneous(QEvent* theWrappedObject) const
{
  return ( theWrappedObject->spontaneous());
}

QEvent::Type  PythonQtWrapper_QEvent::type(QEvent* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QEvent::py_toString(QEvent* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



PythonQtShell_QEventLoop::~PythonQtShell_QEventLoop() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QEventLoop::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventLoop::childEvent(event0);
}
void PythonQtShell_QEventLoop::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventLoop::customEvent(event0);
}
bool  PythonQtShell_QEventLoop::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QEventLoop::event(event0);
}
bool  PythonQtShell_QEventLoop::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QEventLoop::eventFilter(watched0, event1);
}
void PythonQtShell_QEventLoop::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventLoop::timerEvent(event0);
}
QEventLoop* PythonQtWrapper_QEventLoop::new_QEventLoop(QObject*  parent)
{ 
return new PythonQtShell_QEventLoop(parent); }

const QMetaObject* PythonQtShell_QEventLoop::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QEventLoop::staticMetaObject);
  } else {
    return &QEventLoop::staticMetaObject;
  }
}
int PythonQtShell_QEventLoop::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QEventLoop::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QEventLoop::exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags)
{
  return ( theWrappedObject->exec(flags));
}

void PythonQtWrapper_QEventLoop::exit(QEventLoop* theWrappedObject, int  returnCode)
{
  ( theWrappedObject->exit(returnCode));
}

bool  PythonQtWrapper_QEventLoop::isRunning(QEventLoop* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

bool  PythonQtWrapper_QEventLoop::processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags)
{
  return ( theWrappedObject->processEvents(flags));
}

void PythonQtWrapper_QEventLoop::processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime)
{
  ( theWrappedObject->processEvents(flags, maximumTime));
}

void PythonQtWrapper_QEventLoop::wakeUp(QEventLoop* theWrappedObject)
{
  ( theWrappedObject->wakeUp());
}



PythonQtShell_QEventTransition::~PythonQtShell_QEventTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QEventTransition::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventTransition::childEvent(event0);
}
void PythonQtShell_QEventTransition::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventTransition::customEvent(event0);
}
bool  PythonQtShell_QEventTransition::event(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QEventTransition::event(e0);
}
bool  PythonQtShell_QEventTransition::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QEventTransition::eventFilter(watched0, event1);
}
bool  PythonQtShell_QEventTransition::eventTest(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventTest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QEventTransition::eventTest(event0);
}
void PythonQtShell_QEventTransition::onTransition(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onTransition");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventTransition::onTransition(event0);
}
void PythonQtShell_QEventTransition::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QEventTransition::timerEvent(event0);
}
QEventTransition* PythonQtWrapper_QEventTransition::new_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState)
{ 
return new PythonQtShell_QEventTransition(object, type, sourceState); }

QEventTransition* PythonQtWrapper_QEventTransition::new_QEventTransition(QState*  sourceState)
{ 
return new PythonQtShell_QEventTransition(sourceState); }

const QMetaObject* PythonQtShell_QEventTransition::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QEventTransition::staticMetaObject);
  } else {
    return &QEventTransition::staticMetaObject;
  }
}
int PythonQtShell_QEventTransition::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QEventTransition::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QObject*  PythonQtWrapper_QEventTransition::eventSource(QEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->eventSource());
}

QEvent::Type  PythonQtWrapper_QEventTransition::eventType(QEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->eventType());
}

void PythonQtWrapper_QEventTransition::setEventSource(QEventTransition* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->setEventSource(object));
}

void PythonQtWrapper_QEventTransition::setEventType(QEventTransition* theWrappedObject, QEvent::Type  type)
{
  ( theWrappedObject->setEventType(type));
}



PythonQtShell_QFactoryInterface::~PythonQtShell_QFactoryInterface() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStringList  PythonQtShell_QFactoryInterface::keys() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("keys");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("keys", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QStringList();
}
QFactoryInterface* PythonQtWrapper_QFactoryInterface::new_QFactoryInterface()
{ 
return new PythonQtShell_QFactoryInterface(); }

QStringList  PythonQtWrapper_QFactoryInterface::keys(QFactoryInterface* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}



PythonQtShell_QFile::~PythonQtShell_QFile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QFile::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::atEnd();
}
qint64  PythonQtShell_QFile::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::bytesAvailable();
}
qint64  PythonQtShell_QFile::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::bytesToWrite();
}
bool  PythonQtShell_QFile::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::canReadLine();
}
void PythonQtShell_QFile::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFile::childEvent(event0);
}
void PythonQtShell_QFile::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFile::close();
}
void PythonQtShell_QFile::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFile::customEvent(event0);
}
bool  PythonQtShell_QFile::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::event(event0);
}
bool  PythonQtShell_QFile::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::eventFilter(watched0, event1);
}
QString  PythonQtShell_QFile::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("fileName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fileName", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::fileName();
}
bool  PythonQtShell_QFile::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::isSequential();
}
bool  PythonQtShell_QFile::open(QIODevice::OpenMode  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::open(flags0);
}
QFileDevice::Permissions  PythonQtShell_QFile::permissions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("permissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileDevice::Permissions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("permissions", methodInfo, result);
          } else {
            returnValue = *((QFileDevice::Permissions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::permissions();
}
qint64  PythonQtShell_QFile::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::pos();
}
qint64  PythonQtShell_QFile::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::readData(data0, maxlen1);
}
qint64  PythonQtShell_QFile::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QFile::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::reset();
}
bool  PythonQtShell_QFile::resize(qint64  sz0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("resize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&sz0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resize", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::resize(sz0);
}
bool  PythonQtShell_QFile::seek(qint64  offset0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::seek(offset0);
}
bool  PythonQtShell_QFile::setPermissions(QFileDevice::Permissions  permissionSpec0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setPermissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&permissionSpec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setPermissions", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QFile::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::size();
}
void PythonQtShell_QFile::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFile::timerEvent(event0);
}
bool  PythonQtShell_QFile::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QFile::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QFile::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFile::writeData(data0, len1);
}
QFile* PythonQtWrapper_QFile::new_QFile()
{ 
return new PythonQtShell_QFile(); }

QFile* PythonQtWrapper_QFile::new_QFile(QObject*  parent)
{ 
return new PythonQtShell_QFile(parent); }

QFile* PythonQtWrapper_QFile::new_QFile(const QString&  name)
{ 
return new PythonQtShell_QFile(name); }

QFile* PythonQtWrapper_QFile::new_QFile(const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QFile(name, parent); }

const QMetaObject* PythonQtShell_QFile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFile::staticMetaObject);
  } else {
    return &QFile::staticMetaObject;
  }
}
int PythonQtShell_QFile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QFile::static_QFile_copy(const QString&  fileName, const QString&  newName)
{
  return (QFile::copy(fileName, newName));
}

bool  PythonQtWrapper_QFile::copy(QFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->copy(newName));
}

QString  PythonQtWrapper_QFile::static_QFile_decodeName(const QByteArray&  localFileName)
{
  return (QFile::decodeName(localFileName));
}

QByteArray  PythonQtWrapper_QFile::static_QFile_encodeName(const QString&  fileName)
{
  return (QFile::encodeName(fileName));
}

bool  PythonQtWrapper_QFile::exists(QFile* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

bool  PythonQtWrapper_QFile::static_QFile_exists(const QString&  fileName)
{
  return (QFile::exists(fileName));
}

bool  PythonQtWrapper_QFile::link(QFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->link(newName));
}

bool  PythonQtWrapper_QFile::static_QFile_link(const QString&  oldname, const QString&  newName)
{
  return (QFile::link(oldname, newName));
}

bool  PythonQtWrapper_QFile::moveToTrash(QFile* theWrappedObject)
{
  return ( theWrappedObject->moveToTrash());
}

bool  PythonQtWrapper_QFile::static_QFile_moveToTrash(const QString&  fileName, QString*  pathInTrash)
{
  return (QFile::moveToTrash(fileName, pathInTrash));
}

bool  PythonQtWrapper_QFile::open(QFile* theWrappedObject, int  fd, QIODevice::OpenMode  ioFlags, QFileDevice::FileHandleFlags  handleFlags)
{
  return ( theWrappedObject->open(fd, ioFlags, handleFlags));
}

QFileDevice::Permissions  PythonQtWrapper_QFile::static_QFile_permissions(const QString&  filename)
{
  return (QFile::permissions(filename));
}

bool  PythonQtWrapper_QFile::remove(QFile* theWrappedObject)
{
  return ( theWrappedObject->remove());
}

bool  PythonQtWrapper_QFile::static_QFile_remove(const QString&  fileName)
{
  return (QFile::remove(fileName));
}

bool  PythonQtWrapper_QFile::rename(QFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->rename(newName));
}

bool  PythonQtWrapper_QFile::static_QFile_rename(const QString&  oldName, const QString&  newName)
{
  return (QFile::rename(oldName, newName));
}

bool  PythonQtWrapper_QFile::static_QFile_resize(const QString&  filename, qint64  sz)
{
  return (QFile::resize(filename, sz));
}

void PythonQtWrapper_QFile::setFileName(QFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileName(name));
}

bool  PythonQtWrapper_QFile::static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec)
{
  return (QFile::setPermissions(filename, permissionSpec));
}

QString  PythonQtWrapper_QFile::symLinkTarget(QFile* theWrappedObject) const
{
  return ( theWrappedObject->symLinkTarget());
}

QString  PythonQtWrapper_QFile::static_QFile_symLinkTarget(const QString&  fileName)
{
  return (QFile::symLinkTarget(fileName));
}



PythonQtShell_QFileDevice::~PythonQtShell_QFileDevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QFileDevice::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::atEnd();
}
qint64  PythonQtShell_QFileDevice::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::bytesAvailable();
}
qint64  PythonQtShell_QFileDevice::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::bytesToWrite();
}
bool  PythonQtShell_QFileDevice::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::canReadLine();
}
void PythonQtShell_QFileDevice::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileDevice::childEvent(event0);
}
void PythonQtShell_QFileDevice::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileDevice::close();
}
void PythonQtShell_QFileDevice::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileDevice::customEvent(event0);
}
bool  PythonQtShell_QFileDevice::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::event(event0);
}
bool  PythonQtShell_QFileDevice::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::eventFilter(watched0, event1);
}
QString  PythonQtShell_QFileDevice::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("fileName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fileName", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::fileName();
}
bool  PythonQtShell_QFileDevice::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::isSequential();
}
bool  PythonQtShell_QFileDevice::open(QIODevice::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::open(mode0);
}
QFileDevice::Permissions  PythonQtShell_QFileDevice::permissions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("permissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileDevice::Permissions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("permissions", methodInfo, result);
          } else {
            returnValue = *((QFileDevice::Permissions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::permissions();
}
qint64  PythonQtShell_QFileDevice::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::pos();
}
qint64  PythonQtShell_QFileDevice::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::readData(data0, maxlen1);
}
qint64  PythonQtShell_QFileDevice::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QFileDevice::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::reset();
}
bool  PythonQtShell_QFileDevice::resize(qint64  sz0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("resize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&sz0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resize", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::resize(sz0);
}
bool  PythonQtShell_QFileDevice::seek(qint64  offset0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::seek(offset0);
}
bool  PythonQtShell_QFileDevice::setPermissions(QFileDevice::Permissions  permissionSpec0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setPermissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&permissionSpec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setPermissions", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QFileDevice::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::size();
}
void PythonQtShell_QFileDevice::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileDevice::timerEvent(event0);
}
bool  PythonQtShell_QFileDevice::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QFileDevice::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QFileDevice::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileDevice::writeData(data0, len1);
}
QFileDevice* PythonQtWrapper_QFileDevice::new_QFileDevice()
{ 
return new PythonQtShell_QFileDevice(); }

QFileDevice* PythonQtWrapper_QFileDevice::new_QFileDevice(QObject*  parent)
{ 
return new PythonQtShell_QFileDevice(parent); }

const QMetaObject* PythonQtShell_QFileDevice::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFileDevice::staticMetaObject);
  } else {
    return &QFileDevice::staticMetaObject;
  }
}
int PythonQtShell_QFileDevice::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFileDevice::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QFileDevice::FileError  PythonQtWrapper_QFileDevice::error(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QFileDevice::fileName(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QDateTime  PythonQtWrapper_QFileDevice::fileTime(QFileDevice* theWrappedObject, QFileDevice::FileTime  time) const
{
  return ( theWrappedObject->fileTime(time));
}

bool  PythonQtWrapper_QFileDevice::flush(QFileDevice* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

int  PythonQtWrapper_QFileDevice::handle(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

uchar*  PythonQtWrapper_QFileDevice::map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags)
{
  return ( theWrappedObject->map(offset, size, flags));
}

QFileDevice::Permissions  PythonQtWrapper_QFileDevice::permissions(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

bool  PythonQtWrapper_QFileDevice::resize(QFileDevice* theWrappedObject, qint64  sz)
{
  return ( theWrappedObject->resize(sz));
}

bool  PythonQtWrapper_QFileDevice::setFileTime(QFileDevice* theWrappedObject, const QDateTime&  newDate, QFileDevice::FileTime  fileTime)
{
  return ( theWrappedObject->setFileTime(newDate, fileTime));
}

bool  PythonQtWrapper_QFileDevice::setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec)
{
  return ( theWrappedObject->setPermissions(permissionSpec));
}

bool  PythonQtWrapper_QFileDevice::unmap(QFileDevice* theWrappedObject, uchar*  address)
{
  return ( theWrappedObject->unmap(address));
}

void PythonQtWrapper_QFileDevice::unsetError(QFileDevice* theWrappedObject)
{
  ( theWrappedObject->unsetError());
}



QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo()
{ 
return new QFileInfo(); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QDir&  dir, const QString&  file)
{ 
return new QFileInfo(dir, file); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QFile&  file)
{ 
return new QFileInfo(file); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QFileInfo&  fileinfo)
{ 
return new QFileInfo(fileinfo); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QString&  file)
{ 
return new QFileInfo(file); }

QDir  PythonQtWrapper_QFileInfo::absoluteDir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absoluteDir());
}

QString  PythonQtWrapper_QFileInfo::absoluteFilePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absoluteFilePath());
}

QString  PythonQtWrapper_QFileInfo::absolutePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absolutePath());
}

QString  PythonQtWrapper_QFileInfo::baseName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->baseName());
}

QDateTime  PythonQtWrapper_QFileInfo::birthTime(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->birthTime());
}

QString  PythonQtWrapper_QFileInfo::bundleName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->bundleName());
}

bool  PythonQtWrapper_QFileInfo::caching(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->caching());
}

QString  PythonQtWrapper_QFileInfo::canonicalFilePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->canonicalFilePath());
}

QString  PythonQtWrapper_QFileInfo::canonicalPath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->canonicalPath());
}

QString  PythonQtWrapper_QFileInfo::completeBaseName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->completeBaseName());
}

QString  PythonQtWrapper_QFileInfo::completeSuffix(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->completeSuffix());
}

QDateTime  PythonQtWrapper_QFileInfo::created(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->created());
}

QDir  PythonQtWrapper_QFileInfo::dir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->dir());
}

bool  PythonQtWrapper_QFileInfo::exists(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

bool  PythonQtWrapper_QFileInfo::static_QFileInfo_exists(const QString&  file)
{
  return (QFileInfo::exists(file));
}

QString  PythonQtWrapper_QFileInfo::fileName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QFileInfo::filePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

QString  PythonQtWrapper_QFileInfo::group(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

uint  PythonQtWrapper_QFileInfo::groupId(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->groupId());
}

bool  PythonQtWrapper_QFileInfo::isAbsolute(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isAbsolute());
}

bool  PythonQtWrapper_QFileInfo::isBundle(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isBundle());
}

bool  PythonQtWrapper_QFileInfo::isDir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isDir());
}

bool  PythonQtWrapper_QFileInfo::isExecutable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isExecutable());
}

bool  PythonQtWrapper_QFileInfo::isFile(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isFile());
}

bool  PythonQtWrapper_QFileInfo::isHidden(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QFileInfo::isJunction(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isJunction());
}

bool  PythonQtWrapper_QFileInfo::isNativePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isNativePath());
}

bool  PythonQtWrapper_QFileInfo::isReadable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QFileInfo::isRelative(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

bool  PythonQtWrapper_QFileInfo::isRoot(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isRoot());
}

bool  PythonQtWrapper_QFileInfo::isShortcut(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isShortcut());
}

bool  PythonQtWrapper_QFileInfo::isSymLink(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isSymLink());
}

bool  PythonQtWrapper_QFileInfo::isSymbolicLink(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isSymbolicLink());
}

bool  PythonQtWrapper_QFileInfo::isWritable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QDateTime  PythonQtWrapper_QFileInfo::lastModified(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

QDateTime  PythonQtWrapper_QFileInfo::lastRead(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastRead());
}

bool  PythonQtWrapper_QFileInfo::makeAbsolute(QFileInfo* theWrappedObject)
{
  return ( theWrappedObject->makeAbsolute());
}

QDateTime  PythonQtWrapper_QFileInfo::metadataChangeTime(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->metadataChangeTime());
}

QString  PythonQtWrapper_QFileInfo::owner(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->owner());
}

uint  PythonQtWrapper_QFileInfo::ownerId(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->ownerId());
}

QString  PythonQtWrapper_QFileInfo::path(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

bool  PythonQtWrapper_QFileInfo::permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const
{
  return ( theWrappedObject->permission(permissions));
}

QFile::Permissions  PythonQtWrapper_QFileInfo::permissions(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

void PythonQtWrapper_QFileInfo::refresh(QFileInfo* theWrappedObject)
{
  ( theWrappedObject->refresh());
}

void PythonQtWrapper_QFileInfo::setCaching(QFileInfo* theWrappedObject, bool  on)
{
  ( theWrappedObject->setCaching(on));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file)
{
  ( theWrappedObject->setFile(dir, file));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QFile&  file)
{
  ( theWrappedObject->setFile(file));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->setFile(file));
}

qint64  PythonQtWrapper_QFileInfo::size(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QString  PythonQtWrapper_QFileInfo::suffix(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->suffix());
}

void PythonQtWrapper_QFileInfo::swap(QFileInfo* theWrappedObject, QFileInfo&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QFileInfo::symLinkTarget(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->symLinkTarget());
}

QString PythonQtWrapper_QFileInfo::py_toString(QFileInfo* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QFileSelector::~PythonQtShell_QFileSelector() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFileSelector::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileSelector::childEvent(event0);
}
void PythonQtShell_QFileSelector::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileSelector::customEvent(event0);
}
bool  PythonQtShell_QFileSelector::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileSelector::event(event0);
}
bool  PythonQtShell_QFileSelector::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileSelector::eventFilter(watched0, event1);
}
void PythonQtShell_QFileSelector::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileSelector::timerEvent(event0);
}
QFileSelector* PythonQtWrapper_QFileSelector::new_QFileSelector(QObject*  parent)
{ 
return new PythonQtShell_QFileSelector(parent); }

const QMetaObject* PythonQtShell_QFileSelector::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFileSelector::staticMetaObject);
  } else {
    return &QFileSelector::staticMetaObject;
  }
}
int PythonQtShell_QFileSelector::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFileSelector::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QFileSelector::allSelectors(QFileSelector* theWrappedObject) const
{
  return ( theWrappedObject->allSelectors());
}

QStringList  PythonQtWrapper_QFileSelector::extraSelectors(QFileSelector* theWrappedObject) const
{
  return ( theWrappedObject->extraSelectors());
}

QString  PythonQtWrapper_QFileSelector::select(QFileSelector* theWrappedObject, const QString&  filePath) const
{
  return ( theWrappedObject->select(filePath));
}

QUrl  PythonQtWrapper_QFileSelector::select(QFileSelector* theWrappedObject, const QUrl&  filePath) const
{
  return ( theWrappedObject->select(filePath));
}

void PythonQtWrapper_QFileSelector::setExtraSelectors(QFileSelector* theWrappedObject, const QStringList&  list)
{
  ( theWrappedObject->setExtraSelectors(list));
}



PythonQtShell_QFileSystemWatcher::~PythonQtShell_QFileSystemWatcher() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFileSystemWatcher::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileSystemWatcher::childEvent(event0);
}
void PythonQtShell_QFileSystemWatcher::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileSystemWatcher::customEvent(event0);
}
bool  PythonQtShell_QFileSystemWatcher::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileSystemWatcher::event(event0);
}
bool  PythonQtShell_QFileSystemWatcher::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFileSystemWatcher::eventFilter(watched0, event1);
}
void PythonQtShell_QFileSystemWatcher::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFileSystemWatcher::timerEvent(event0);
}
QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(QObject*  parent)
{ 
return new PythonQtShell_QFileSystemWatcher(parent); }

QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent)
{ 
return new PythonQtShell_QFileSystemWatcher(paths, parent); }

const QMetaObject* PythonQtShell_QFileSystemWatcher::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFileSystemWatcher::staticMetaObject);
  } else {
    return &QFileSystemWatcher::staticMetaObject;
  }
}
int PythonQtShell_QFileSystemWatcher::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFileSystemWatcher::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QFileSystemWatcher::addPath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
  return ( theWrappedObject->addPath(file));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
  return ( theWrappedObject->addPaths(files));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::directories(QFileSystemWatcher* theWrappedObject) const
{
  return ( theWrappedObject->directories());
}

QStringList  PythonQtWrapper_QFileSystemWatcher::files(QFileSystemWatcher* theWrappedObject) const
{
  return ( theWrappedObject->files());
}

bool  PythonQtWrapper_QFileSystemWatcher::removePath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
  return ( theWrappedObject->removePath(file));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
  return ( theWrappedObject->removePaths(files));
}



PythonQtShell_QFinalState::~PythonQtShell_QFinalState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFinalState::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFinalState::childEvent(event0);
}
void PythonQtShell_QFinalState::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFinalState::customEvent(event0);
}
bool  PythonQtShell_QFinalState::event(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFinalState::event(e0);
}
bool  PythonQtShell_QFinalState::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QFinalState::eventFilter(watched0, event1);
}
void PythonQtShell_QFinalState::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onEntry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFinalState::onEntry(event0);
}
void PythonQtShell_QFinalState::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onExit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFinalState::onExit(event0);
}
void PythonQtShell_QFinalState::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QFinalState::timerEvent(event0);
}
QFinalState* PythonQtWrapper_QFinalState::new_QFinalState(QState*  parent)
{ 
return new PythonQtShell_QFinalState(parent); }

const QMetaObject* PythonQtShell_QFinalState::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFinalState::staticMetaObject);
  } else {
    return &QFinalState::staticMetaObject;
  }
}
int PythonQtShell_QFinalState::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFinalState::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QHistoryState::~PythonQtShell_QHistoryState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHistoryState::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHistoryState::childEvent(event0);
}
void PythonQtShell_QHistoryState::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHistoryState::customEvent(event0);
}
bool  PythonQtShell_QHistoryState::event(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHistoryState::event(e0);
}
bool  PythonQtShell_QHistoryState::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QHistoryState::eventFilter(watched0, event1);
}
void PythonQtShell_QHistoryState::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onEntry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHistoryState::onEntry(event0);
}
void PythonQtShell_QHistoryState::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onExit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHistoryState::onExit(event0);
}
void PythonQtShell_QHistoryState::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QHistoryState::timerEvent(event0);
}
QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent)
{ 
return new PythonQtShell_QHistoryState(type, parent); }

QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QState*  parent)
{ 
return new PythonQtShell_QHistoryState(parent); }

const QMetaObject* PythonQtShell_QHistoryState::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QHistoryState::staticMetaObject);
  } else {
    return &QHistoryState::staticMetaObject;
  }
}
int PythonQtShell_QHistoryState::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QHistoryState::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAbstractState*  PythonQtWrapper_QHistoryState::defaultState(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->defaultState());
}

QAbstractTransition*  PythonQtWrapper_QHistoryState::defaultTransition(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->defaultTransition());
}

QHistoryState::HistoryType  PythonQtWrapper_QHistoryState::historyType(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->historyType());
}

void PythonQtWrapper_QHistoryState::setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setDefaultState(state));
}

void PythonQtWrapper_QHistoryState::setDefaultTransition(QHistoryState* theWrappedObject, QAbstractTransition*  transition)
{
  ( theWrappedObject->setDefaultTransition(transition));
}

void PythonQtWrapper_QHistoryState::setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type)
{
  ( theWrappedObject->setHistoryType(type));
}



PythonQtShell_QIODevice::~PythonQtShell_QIODevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QIODevice::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::atEnd();
}
qint64  PythonQtShell_QIODevice::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::bytesAvailable();
}
qint64  PythonQtShell_QIODevice::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::bytesToWrite();
}
bool  PythonQtShell_QIODevice::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::canReadLine();
}
void PythonQtShell_QIODevice::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIODevice::childEvent(event0);
}
void PythonQtShell_QIODevice::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIODevice::close();
}
void PythonQtShell_QIODevice::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIODevice::customEvent(event0);
}
bool  PythonQtShell_QIODevice::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::event(event0);
}
bool  PythonQtShell_QIODevice::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::eventFilter(watched0, event1);
}
bool  PythonQtShell_QIODevice::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::isSequential();
}
bool  PythonQtShell_QIODevice::open(QIODevice::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::open(mode0);
}
qint64  PythonQtShell_QIODevice::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::pos();
}
qint64  PythonQtShell_QIODevice::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return qint64();
}
qint64  PythonQtShell_QIODevice::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QIODevice::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::reset();
}
bool  PythonQtShell_QIODevice::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::seek(pos0);
}
qint64  PythonQtShell_QIODevice::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::size();
}
void PythonQtShell_QIODevice::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIODevice::timerEvent(event0);
}
bool  PythonQtShell_QIODevice::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QIODevice::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIODevice::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QIODevice::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return qint64();
}
QIODevice* PythonQtWrapper_QIODevice::new_QIODevice()
{ 
return new PythonQtShell_QIODevice(); }

QIODevice* PythonQtWrapper_QIODevice::new_QIODevice(QObject*  parent)
{ 
return new PythonQtShell_QIODevice(parent); }

const QMetaObject* PythonQtShell_QIODevice::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QIODevice::staticMetaObject);
  } else {
    return &QIODevice::staticMetaObject;
  }
}
int PythonQtShell_QIODevice::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QIODevice::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QIODevice::atEnd(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

qint64  PythonQtWrapper_QIODevice::bytesAvailable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

qint64  PythonQtWrapper_QIODevice::bytesToWrite(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->bytesToWrite());
}

bool  PythonQtWrapper_QIODevice::canReadLine(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->canReadLine());
}

void PythonQtWrapper_QIODevice::close(QIODevice* theWrappedObject)
{
  ( theWrappedObject->close());
}

void PythonQtWrapper_QIODevice::commitTransaction(QIODevice* theWrappedObject)
{
  ( theWrappedObject->commitTransaction());
}

int  PythonQtWrapper_QIODevice::currentReadChannel(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->currentReadChannel());
}

int  PythonQtWrapper_QIODevice::currentWriteChannel(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->currentWriteChannel());
}

QString  PythonQtWrapper_QIODevice::errorString(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QIODevice::getChar(QIODevice* theWrappedObject, char*  c)
{
  return ( theWrappedObject->getChar(c));
}

bool  PythonQtWrapper_QIODevice::isOpen(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

bool  PythonQtWrapper_QIODevice::isReadable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QIODevice::isSequential(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isSequential());
}

bool  PythonQtWrapper_QIODevice::isTextModeEnabled(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isTextModeEnabled());
}

bool  PythonQtWrapper_QIODevice::isTransactionStarted(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isTransactionStarted());
}

bool  PythonQtWrapper_QIODevice::isWritable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

bool  PythonQtWrapper_QIODevice::open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode)
{
  return ( theWrappedObject->open(mode));
}

QIODevice::OpenMode  PythonQtWrapper_QIODevice::openMode(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->openMode());
}

QByteArray  PythonQtWrapper_QIODevice::peek(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->peek(maxlen));
}

qint64  PythonQtWrapper_QIODevice::pos(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

bool  PythonQtWrapper_QIODevice::putChar(QIODevice* theWrappedObject, char  c)
{
  return ( theWrappedObject->putChar(c));
}

QByteArray  PythonQtWrapper_QIODevice::read(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

QByteArray  PythonQtWrapper_QIODevice::readAll(QIODevice* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

int  PythonQtWrapper_QIODevice::readChannelCount(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->readChannelCount());
}

qint64  PythonQtWrapper_QIODevice::readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_readData(data, maxlen));
}

QByteArray  PythonQtWrapper_QIODevice::readLine(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

qint64  PythonQtWrapper_QIODevice::readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_readLineData(data, maxlen));
}

bool  PythonQtWrapper_QIODevice::reset(QIODevice* theWrappedObject)
{
  return ( theWrappedObject->reset());
}

void PythonQtWrapper_QIODevice::rollbackTransaction(QIODevice* theWrappedObject)
{
  ( theWrappedObject->rollbackTransaction());
}

bool  PythonQtWrapper_QIODevice::seek(QIODevice* theWrappedObject, qint64  pos)
{
  return ( theWrappedObject->seek(pos));
}

void PythonQtWrapper_QIODevice::setCurrentReadChannel(QIODevice* theWrappedObject, int  channel)
{
  ( theWrappedObject->setCurrentReadChannel(channel));
}

void PythonQtWrapper_QIODevice::setCurrentWriteChannel(QIODevice* theWrappedObject, int  channel)
{
  ( theWrappedObject->setCurrentWriteChannel(channel));
}

void PythonQtWrapper_QIODevice::setErrorString(QIODevice* theWrappedObject, const QString&  errorString)
{
  ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_setErrorString(errorString));
}

void PythonQtWrapper_QIODevice::setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode)
{
  ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_setOpenMode(openMode));
}

void PythonQtWrapper_QIODevice::setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setTextModeEnabled(enabled));
}

qint64  PythonQtWrapper_QIODevice::size(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

qint64  PythonQtWrapper_QIODevice::skip(QIODevice* theWrappedObject, qint64  maxSize)
{
  return ( theWrappedObject->skip(maxSize));
}

void PythonQtWrapper_QIODevice::startTransaction(QIODevice* theWrappedObject)
{
  ( theWrappedObject->startTransaction());
}

void PythonQtWrapper_QIODevice::ungetChar(QIODevice* theWrappedObject, char  c)
{
  ( theWrappedObject->ungetChar(c));
}

bool  PythonQtWrapper_QIODevice::waitForBytesWritten(QIODevice* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QIODevice::waitForReadyRead(QIODevice* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForReadyRead(msecs));
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const QByteArray&  data)
{
  return ( theWrappedObject->write(data));
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const char*  data)
{
  return ( theWrappedObject->write(data));
}

int  PythonQtWrapper_QIODevice::writeChannelCount(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->writeChannelCount());
}

qint64  PythonQtWrapper_QIODevice::writeData(QIODevice* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_writeData(data, len));
}



PythonQtShell_QIdentityProxyModel::~PythonQtShell_QIdentityProxyModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QIdentityProxyModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("buddy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::buddy(index0);
}
bool  PythonQtShell_QIdentityProxyModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canDropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canDropMimeData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QIdentityProxyModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canFetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::canFetchMore(parent0);
}
void PythonQtShell_QIdentityProxyModel::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::childEvent(event0);
}
int  PythonQtShell_QIdentityProxyModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("columnCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::columnCount(parent0);
}
void PythonQtShell_QIdentityProxyModel::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::customEvent(event0);
}
QVariant  PythonQtShell_QIdentityProxyModel::data(const QModelIndex&  proxyIndex0, int  role1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {nullptr, (void*)&proxyIndex0, (void*)&role1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::data(proxyIndex0, role1);
}
bool  PythonQtShell_QIdentityProxyModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QIdentityProxyModel::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::event(event0);
}
bool  PythonQtShell_QIdentityProxyModel::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::eventFilter(watched0, event1);
}
void PythonQtShell_QIdentityProxyModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("fetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QIdentityProxyModel::flags(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("flags");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
          } else {
            returnValue = *((Qt::ItemFlags*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::flags(index0);
}
bool  PythonQtShell_QIdentityProxyModel::hasChildren(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("hasChildren");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasChildren", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::hasChildren(parent0);
}
QVariant  PythonQtShell_QIdentityProxyModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("headerData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&section0, (void*)&orientation1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("index");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&column1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::index(row0, column1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("insertColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("insertRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QIdentityProxyModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("itemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
          } else {
            returnValue = *((QMap<int , QVariant >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::itemData(index0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::mapFromSource(const QModelIndex&  sourceIndex0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mapFromSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&sourceIndex0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapFromSource", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::mapFromSource(sourceIndex0);
}
QItemSelection  PythonQtShell_QIdentityProxyModel::mapSelectionFromSource(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mapSelectionFromSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelection" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QItemSelection returnValue{};
      void* args[2] = {nullptr, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapSelectionFromSource", methodInfo, result);
          } else {
            returnValue = *((QItemSelection*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::mapSelectionFromSource(selection0);
}
QItemSelection  PythonQtShell_QIdentityProxyModel::mapSelectionToSource(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mapSelectionToSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelection" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QItemSelection returnValue{};
      void* args[2] = {nullptr, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapSelectionToSource", methodInfo, result);
          } else {
            returnValue = *((QItemSelection*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::mapSelectionToSource(selection0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::mapToSource(const QModelIndex&  proxyIndex0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mapToSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&proxyIndex0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapToSource", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::mapToSource(proxyIndex0);
}
QList<QModelIndex >  PythonQtShell_QIdentityProxyModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("match");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue{};
      void* args[6] = {nullptr, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
          } else {
            returnValue = *((QList<QModelIndex >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QIdentityProxyModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue{};
      void* args[2] = {nullptr, (void*)&indexes0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
          } else {
            returnValue = *((QMimeData**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QIdentityProxyModel::mimeTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mimeTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::mimeTypes();
}
bool  PythonQtShell_QIdentityProxyModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveColumns", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QIdentityProxyModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveRows", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::parent(const QModelIndex&  child0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("parent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&child0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("parent", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::parent(child0);
}
bool  PythonQtShell_QIdentityProxyModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("removeColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("removeRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QIdentityProxyModel::revert()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("revert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::revert();
}
QHash<int , QByteArray >  PythonQtShell_QIdentityProxyModel::roleNames() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("roleNames");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHash<int , QByteArray >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("roleNames", methodInfo, result);
          } else {
            returnValue = *((QHash<int , QByteArray >*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::roleNames();
}
int  PythonQtShell_QIdentityProxyModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("rowCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::rowCount(parent0);
}
bool  PythonQtShell_QIdentityProxyModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&index0, (void*)&value1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QIdentityProxyModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setHeaderData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {nullptr, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QIdentityProxyModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setItemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&roles1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::setItemData(index0, roles1);
}
void PythonQtShell_QIdentityProxyModel::setSourceModel(QAbstractItemModel*  sourceModel0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setSourceModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractItemModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&sourceModel0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::setSourceModel(sourceModel0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sibling");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&column1, (void*)&idx2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sibling", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QIdentityProxyModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sort");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&column0, (void*)&order1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::sort(column0, order1);
}
QSize  PythonQtShell_QIdentityProxyModel::span(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("span");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::span(index0);
}
bool  PythonQtShell_QIdentityProxyModel::submit()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("submit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::submit();
}
Qt::DropActions  PythonQtShell_QIdentityProxyModel::supportedDragActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("supportedDragActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedDragActions", methodInfo, result);
          } else {
            returnValue = *((Qt::DropActions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QIdentityProxyModel::supportedDropActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("supportedDropActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
          } else {
            returnValue = *((Qt::DropActions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QIdentityProxyModel::supportedDropActions();
}
void PythonQtShell_QIdentityProxyModel::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::timerEvent(event0);
}
QIdentityProxyModel* PythonQtWrapper_QIdentityProxyModel::new_QIdentityProxyModel(QObject*  parent)
{ 
return new PythonQtShell_QIdentityProxyModel(parent); }

const QMetaObject* PythonQtShell_QIdentityProxyModel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QIdentityProxyModel::staticMetaObject);
  } else {
    return &QIdentityProxyModel::staticMetaObject;
  }
}
int PythonQtShell_QIdentityProxyModel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QIdentityProxyModel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


QJsonArray* PythonQtWrapper_QJsonArray::new_QJsonArray()
{ 
return new QJsonArray(); }

QJsonArray* PythonQtWrapper_QJsonArray::new_QJsonArray(const QJsonArray&  other)
{ 
return new QJsonArray(other); }

void PythonQtWrapper_QJsonArray::append(QJsonArray* theWrappedObject, const QJsonValue&  value)
{
  ( theWrappedObject->append(value));
}

QJsonValue  PythonQtWrapper_QJsonArray::at(QJsonArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

bool  PythonQtWrapper_QJsonArray::contains(QJsonArray* theWrappedObject, const QJsonValue&  element) const
{
  return ( theWrappedObject->contains(element));
}

int  PythonQtWrapper_QJsonArray::count(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QJsonArray::empty(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

QJsonValue  PythonQtWrapper_QJsonArray::first(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->first());
}

QJsonArray  PythonQtWrapper_QJsonArray::static_QJsonArray_fromStringList(const QStringList&  list)
{
  return (QJsonArray::fromStringList(list));
}

QJsonArray  PythonQtWrapper_QJsonArray::static_QJsonArray_fromVariantList(const QList<QVariant >&  list)
{
  return (QJsonArray::fromVariantList(list));
}

bool  PythonQtWrapper_QJsonArray::isEmpty(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QJsonValue  PythonQtWrapper_QJsonArray::last(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->last());
}

bool  PythonQtWrapper_QJsonArray::__ne__(QJsonArray* theWrappedObject, const QJsonArray&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QJsonArray  PythonQtWrapper_QJsonArray::__add__(QJsonArray* theWrappedObject, const QJsonValue&  v) const
{
  return ( (*theWrappedObject)+ v);
}

QJsonArray*  PythonQtWrapper_QJsonArray::__iadd__(QJsonArray* theWrappedObject, const QJsonValue&  v)
{
  return &( (*theWrappedObject)+= v);
}

void PythonQtWrapper_QJsonArray::writeTo(QJsonArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QJsonArray*  PythonQtWrapper_QJsonArray::__lshift__(QJsonArray* theWrappedObject, const QJsonValue&  v)
{
  return &( (*theWrappedObject) <<v);
}

QJsonArray*  PythonQtWrapper_QJsonArray::operator_assign(QJsonArray* theWrappedObject, const QJsonArray&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonArray::__eq__(QJsonArray* theWrappedObject, const QJsonArray&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QJsonArray::readFrom(QJsonArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QJsonValue  PythonQtWrapper_QJsonArray::operator_subscript(QJsonArray* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QJsonArray::pop_back(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->pop_back());
}

void PythonQtWrapper_QJsonArray::pop_front(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->pop_front());
}

void PythonQtWrapper_QJsonArray::prepend(QJsonArray* theWrappedObject, const QJsonValue&  value)
{
  ( theWrappedObject->prepend(value));
}

void PythonQtWrapper_QJsonArray::push_back(QJsonArray* theWrappedObject, const QJsonValue&  t)
{
  ( theWrappedObject->push_back(t));
}

void PythonQtWrapper_QJsonArray::push_front(QJsonArray* theWrappedObject, const QJsonValue&  t)
{
  ( theWrappedObject->push_front(t));
}

void PythonQtWrapper_QJsonArray::removeAt(QJsonArray* theWrappedObject, int  i)
{
  ( theWrappedObject->removeAt(i));
}

void PythonQtWrapper_QJsonArray::removeFirst(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->removeFirst());
}

void PythonQtWrapper_QJsonArray::removeLast(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->removeLast());
}

void PythonQtWrapper_QJsonArray::replace(QJsonArray* theWrappedObject, int  i, const QJsonValue&  value)
{
  ( theWrappedObject->replace(i, value));
}

int  PythonQtWrapper_QJsonArray::size(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QJsonArray::swap(QJsonArray* theWrappedObject, QJsonArray&  other)
{
  ( theWrappedObject->swap(other));
}

QJsonValue  PythonQtWrapper_QJsonArray::takeAt(QJsonArray* theWrappedObject, int  i)
{
  return ( theWrappedObject->takeAt(i));
}

QList<QVariant >  PythonQtWrapper_QJsonArray::toVariantList(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->toVariantList());
}

QString PythonQtWrapper_QJsonArray::py_toString(QJsonArray* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QJsonDocument::~PythonQtShell_QJsonDocument() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument()
{ 
return new PythonQtShell_QJsonDocument(); }

QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument(const QJsonArray&  array)
{ 
return new PythonQtShell_QJsonDocument(array); }

QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument(const QJsonDocument&  other)
{ 
return new PythonQtShell_QJsonDocument(other); }

QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument(const QJsonObject&  object)
{ 
return new PythonQtShell_QJsonDocument(object); }

QJsonArray  PythonQtWrapper_QJsonDocument::array(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->array());
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromBinaryData(const QByteArray&  data, QJsonDocument::DataValidation  validation)
{
  return (QJsonDocument::fromBinaryData(data, validation));
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromJson(const QByteArray&  json, QJsonParseError*  error)
{
  return (QJsonDocument::fromJson(json, error));
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromRawData(const char*  data, int  size, QJsonDocument::DataValidation  validation)
{
  return (QJsonDocument::fromRawData(data, size, validation));
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromVariant(const QVariant&  variant)
{
  return (QJsonDocument::fromVariant(variant));
}

bool  PythonQtWrapper_QJsonDocument::isArray(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QJsonDocument::isEmpty(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QJsonDocument::isNull(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QJsonDocument::isObject(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isObject());
}

QJsonObject  PythonQtWrapper_QJsonDocument::object(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

bool  PythonQtWrapper_QJsonDocument::__ne__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QJsonDocument::writeTo(QJsonDocument* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QJsonDocument*  PythonQtWrapper_QJsonDocument::operator_assign(QJsonDocument* theWrappedObject, const QJsonDocument&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonDocument::__eq__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QJsonDocument::readFrom(QJsonDocument* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QJsonValue  PythonQtWrapper_QJsonDocument::operator_subscript(QJsonDocument* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

const QJsonValue  PythonQtWrapper_QJsonDocument::operator_subscript(QJsonDocument* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

const char*  PythonQtWrapper_QJsonDocument::rawData(QJsonDocument* theWrappedObject, int*  size) const
{
  return ( theWrappedObject->rawData(size));
}

void PythonQtWrapper_QJsonDocument::setArray(QJsonDocument* theWrappedObject, const QJsonArray&  array)
{
  ( theWrappedObject->setArray(array));
}

void PythonQtWrapper_QJsonDocument::setObject(QJsonDocument* theWrappedObject, const QJsonObject&  object)
{
  ( theWrappedObject->setObject(object));
}

void PythonQtWrapper_QJsonDocument::swap(QJsonDocument* theWrappedObject, QJsonDocument&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QJsonDocument::toBinaryData(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->toBinaryData());
}

QByteArray  PythonQtWrapper_QJsonDocument::toJson(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->toJson());
}

QByteArray  PythonQtWrapper_QJsonDocument::toJson(QJsonDocument* theWrappedObject, QJsonDocument::JsonFormat  format) const
{
  return ( theWrappedObject->toJson(format));
}

QVariant  PythonQtWrapper_QJsonDocument::toVariant(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QString PythonQtWrapper_QJsonDocument::py_toString(QJsonDocument* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QJsonObject* PythonQtWrapper_QJsonObject::new_QJsonObject()
{ 
return new QJsonObject(); }

QJsonObject* PythonQtWrapper_QJsonObject::new_QJsonObject(const QJsonObject&  other)
{ 
return new QJsonObject(other); }

bool  PythonQtWrapper_QJsonObject::contains(QJsonObject* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

int  PythonQtWrapper_QJsonObject::count(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QJsonObject::empty(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

QJsonObject  PythonQtWrapper_QJsonObject::static_QJsonObject_fromVariantHash(const QHash<QString , QVariant >&  map)
{
  return (QJsonObject::fromVariantHash(map));
}

QJsonObject  PythonQtWrapper_QJsonObject::static_QJsonObject_fromVariantMap(const QMap<QString , QVariant >&  map)
{
  return (QJsonObject::fromVariantMap(map));
}

bool  PythonQtWrapper_QJsonObject::isEmpty(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QJsonObject::keys(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

int  PythonQtWrapper_QJsonObject::length(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QJsonObject::__ne__(QJsonObject* theWrappedObject, const QJsonObject&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QJsonObject::writeTo(QJsonObject* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QJsonObject*  PythonQtWrapper_QJsonObject::operator_assign(QJsonObject* theWrappedObject, const QJsonObject&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonObject::__eq__(QJsonObject* theWrappedObject, const QJsonObject&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QJsonObject::readFrom(QJsonObject* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QJsonValue  PythonQtWrapper_QJsonObject::operator_subscript(QJsonObject* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

void PythonQtWrapper_QJsonObject::remove(QJsonObject* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->remove(key));
}

int  PythonQtWrapper_QJsonObject::size(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QJsonObject::swap(QJsonObject* theWrappedObject, QJsonObject&  other)
{
  ( theWrappedObject->swap(other));
}

QJsonValue  PythonQtWrapper_QJsonObject::take(QJsonObject* theWrappedObject, const QString&  key)
{
  return ( theWrappedObject->take(key));
}

QHash<QString , QVariant >  PythonQtWrapper_QJsonObject::toVariantHash(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->toVariantHash());
}

QMap<QString , QVariant >  PythonQtWrapper_QJsonObject::toVariantMap(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->toVariantMap());
}

QJsonValue  PythonQtWrapper_QJsonObject::value(QJsonObject* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}

QString PythonQtWrapper_QJsonObject::py_toString(QJsonObject* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QJsonParseError::~PythonQtShell_QJsonParseError() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJsonParseError* PythonQtWrapper_QJsonParseError::new_QJsonParseError()
{ 
return new PythonQtShell_QJsonParseError(); }

QString  PythonQtWrapper_QJsonParseError::errorString(QJsonParseError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}



QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(QJsonValue::Type  arg__1)
{ 
return new QJsonValue(arg__1); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(bool  b)
{ 
return new QJsonValue(b); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QJsonArray&  a)
{ 
return new QJsonValue(a); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QJsonObject&  o)
{ 
return new QJsonValue(o); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QJsonValue&  other)
{ 
return new QJsonValue(other); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QString&  s)
{ 
return new QJsonValue(s); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const char*  s)
{ 
return new QJsonValue(s); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(double  n)
{ 
return new QJsonValue(n); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(int  n)
{ 
return new QJsonValue(n); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(qint64  v)
{ 
return new QJsonValue(v); }

QJsonValue  PythonQtWrapper_QJsonValue::static_QJsonValue_fromVariant(const QVariant&  variant)
{
  return (QJsonValue::fromVariant(variant));
}

bool  PythonQtWrapper_QJsonValue::isArray(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QJsonValue::isBool(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isBool());
}

bool  PythonQtWrapper_QJsonValue::isDouble(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isDouble());
}

bool  PythonQtWrapper_QJsonValue::isNull(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QJsonValue::isObject(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isObject());
}

bool  PythonQtWrapper_QJsonValue::isString(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isString());
}

bool  PythonQtWrapper_QJsonValue::isUndefined(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isUndefined());
}

bool  PythonQtWrapper_QJsonValue::__ne__(QJsonValue* theWrappedObject, const QJsonValue&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QJsonValue::writeTo(QJsonValue* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QJsonValue*  PythonQtWrapper_QJsonValue::operator_assign(QJsonValue* theWrappedObject, const QJsonValue&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonValue::__eq__(QJsonValue* theWrappedObject, const QJsonValue&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QJsonValue::readFrom(QJsonValue* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QJsonValue  PythonQtWrapper_QJsonValue::operator_subscript(QJsonValue* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

const QJsonValue  PythonQtWrapper_QJsonValue::operator_subscript(QJsonValue* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QJsonValue::swap(QJsonValue* theWrappedObject, QJsonValue&  other)
{
  ( theWrappedObject->swap(other));
}

QJsonArray  PythonQtWrapper_QJsonValue::toArray(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toArray());
}

QJsonArray  PythonQtWrapper_QJsonValue::toArray(QJsonValue* theWrappedObject, const QJsonArray&  defaultValue) const
{
  return ( theWrappedObject->toArray(defaultValue));
}

bool  PythonQtWrapper_QJsonValue::toBool(QJsonValue* theWrappedObject, bool  defaultValue) const
{
  return ( theWrappedObject->toBool(defaultValue));
}

double  PythonQtWrapper_QJsonValue::toDouble(QJsonValue* theWrappedObject, double  defaultValue) const
{
  return ( theWrappedObject->toDouble(defaultValue));
}

int  PythonQtWrapper_QJsonValue::toInt(QJsonValue* theWrappedObject, int  defaultValue) const
{
  return ( theWrappedObject->toInt(defaultValue));
}

QJsonObject  PythonQtWrapper_QJsonValue::toObject(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toObject());
}

QJsonObject  PythonQtWrapper_QJsonValue::toObject(QJsonValue* theWrappedObject, const QJsonObject&  defaultValue) const
{
  return ( theWrappedObject->toObject(defaultValue));
}

QString  PythonQtWrapper_QJsonValue::toString(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QString  PythonQtWrapper_QJsonValue::toString(QJsonValue* theWrappedObject, const QString&  defaultValue) const
{
  return ( theWrappedObject->toString(defaultValue));
}

QVariant  PythonQtWrapper_QJsonValue::toVariant(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QJsonValue::Type  PythonQtWrapper_QJsonValue::type(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QJsonValue::py_toString(QJsonValue* obj) { return obj->toString(); }


PythonQtShell_QLibrary::~PythonQtShell_QLibrary() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLibrary::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLibrary::childEvent(event0);
}
void PythonQtShell_QLibrary::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLibrary::customEvent(event0);
}
bool  PythonQtShell_QLibrary::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLibrary::event(event0);
}
bool  PythonQtShell_QLibrary::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QLibrary::eventFilter(watched0, event1);
}
void PythonQtShell_QLibrary::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLibrary::timerEvent(event0);
}
QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(QObject*  parent)
{ 
return new PythonQtShell_QLibrary(parent); }

QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(const QString&  fileName, QObject*  parent)
{ 
return new PythonQtShell_QLibrary(fileName, parent); }

QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent)
{ 
return new PythonQtShell_QLibrary(fileName, version, parent); }

QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(const QString&  fileName, int  verNum, QObject*  parent)
{ 
return new PythonQtShell_QLibrary(fileName, verNum, parent); }

const QMetaObject* PythonQtShell_QLibrary::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLibrary::staticMetaObject);
  } else {
    return &QLibrary::staticMetaObject;
  }
}
int PythonQtShell_QLibrary::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLibrary::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QLibrary::errorString(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QLibrary::fileName(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QLibrary::static_QLibrary_isLibrary(const QString&  fileName)
{
  return (QLibrary::isLibrary(fileName));
}

bool  PythonQtWrapper_QLibrary::isLoaded(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->isLoaded());
}

bool  PythonQtWrapper_QLibrary::load(QLibrary* theWrappedObject)
{
  return ( theWrappedObject->load());
}

QLibrary::LoadHints  PythonQtWrapper_QLibrary::loadHints(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->loadHints());
}

void PythonQtWrapper_QLibrary::setFileName(QLibrary* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QLibrary::setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, const QString&  version)
{
  ( theWrappedObject->setFileNameAndVersion(fileName, version));
}

void PythonQtWrapper_QLibrary::setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, int  verNum)
{
  ( theWrappedObject->setFileNameAndVersion(fileName, verNum));
}

void PythonQtWrapper_QLibrary::setLoadHints(QLibrary* theWrappedObject, QLibrary::LoadHints  hints)
{
  ( theWrappedObject->setLoadHints(hints));
}

bool  PythonQtWrapper_QLibrary::unload(QLibrary* theWrappedObject)
{
  return ( theWrappedObject->unload());
}



const char*  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_build()
{
  return (QLibraryInfo::build());
}

QDate  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildDate()
{
  return (QLibraryInfo::buildDate());
}

bool  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_isDebugBuild()
{
  return (QLibraryInfo::isDebugBuild());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensedProducts()
{
  return (QLibraryInfo::licensedProducts());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensee()
{
  return (QLibraryInfo::licensee());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1)
{
  return (QLibraryInfo::location(arg__1));
}

QStringList  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_platformPluginArguments(const QString&  platformName)
{
  return (QLibraryInfo::platformPluginArguments(platformName));
}



QLockFile* PythonQtWrapper_QLockFile::new_QLockFile(const QString&  fileName)
{ 
return new QLockFile(fileName); }

QLockFile::LockError  PythonQtWrapper_QLockFile::error(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QLockFile::getLockInfo(QLockFile* theWrappedObject, qint64*  pid, QString*  hostname, QString*  appname) const
{
  return ( theWrappedObject->getLockInfo(pid, hostname, appname));
}

bool  PythonQtWrapper_QLockFile::isLocked(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->isLocked());
}

bool  PythonQtWrapper_QLockFile::lock(QLockFile* theWrappedObject)
{
  return ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QLockFile::removeStaleLockFile(QLockFile* theWrappedObject)
{
  return ( theWrappedObject->removeStaleLockFile());
}

void PythonQtWrapper_QLockFile::setStaleLockTime(QLockFile* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setStaleLockTime(arg__1));
}

int  PythonQtWrapper_QLockFile::staleLockTime(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->staleLockTime());
}

bool  PythonQtWrapper_QLockFile::tryLock(QLockFile* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

void PythonQtWrapper_QLockFile::unlock(QLockFile* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



const char*  PythonQtWrapper_QLoggingCategory::categoryName(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->categoryName());
}

QLoggingCategory*  PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_defaultCategory()
{
  return (QLoggingCategory::defaultCategory());
}

bool  PythonQtWrapper_QLoggingCategory::isCriticalEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isCriticalEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isDebugEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isDebugEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const
{
  return ( theWrappedObject->isEnabled(type));
}

bool  PythonQtWrapper_QLoggingCategory::isInfoEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isInfoEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isWarningEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isWarningEnabled());
}

void PythonQtWrapper_QLoggingCategory::setEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type, bool  enable)
{
  ( theWrappedObject->setEnabled(type, enable));
}

void PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_setFilterRules(const QString&  rules)
{
  (QLoggingCategory::setFilterRules(rules));
}



QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF()
{ 
return new QMarginsF(); }

QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF(const QMargins&  margins)
{ 
return new QMarginsF(margins); }

QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF(qreal  left, qreal  top, qreal  right, qreal  bottom)
{ 
return new QMarginsF(left, top, right, bottom); }

qreal  PythonQtWrapper_QMarginsF::bottom(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

bool  PythonQtWrapper_QMarginsF::isNull(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QMarginsF::left(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

bool  PythonQtWrapper_QMarginsF::__ne__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QMarginsF  PythonQtWrapper_QMarginsF::__mul__(QMarginsF* theWrappedObject, qreal  rhs)
{
  return ( (*theWrappedObject)* rhs);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__imul__(QMarginsF* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

QMarginsF  PythonQtWrapper_QMarginsF::__add__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QRectF  PythonQtWrapper_QMarginsF::__add__(QMarginsF* theWrappedObject, const QRectF&  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QMarginsF  PythonQtWrapper_QMarginsF::__add__(QMarginsF* theWrappedObject, qreal  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__iadd__(QMarginsF* theWrappedObject, const QMarginsF&  margins)
{
  return &( (*theWrappedObject)+= margins);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__iadd__(QMarginsF* theWrappedObject, qreal  addend)
{
  return &( (*theWrappedObject)+= addend);
}

QMarginsF  PythonQtWrapper_QMarginsF::__sub__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QMarginsF  PythonQtWrapper_QMarginsF::__sub__(QMarginsF* theWrappedObject, qreal  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__isub__(QMarginsF* theWrappedObject, const QMarginsF&  margins)
{
  return &( (*theWrappedObject)-= margins);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__isub__(QMarginsF* theWrappedObject, qreal  subtrahend)
{
  return &( (*theWrappedObject)-= subtrahend);
}

QMarginsF  PythonQtWrapper_QMarginsF::__div__(QMarginsF* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__idiv__(QMarginsF* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QMarginsF::writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QMarginsF::__eq__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QMarginsF::readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QMarginsF::right(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QMarginsF::setBottom(QMarginsF* theWrappedObject, qreal  bottom)
{
  ( theWrappedObject->setBottom(bottom));
}

void PythonQtWrapper_QMarginsF::setLeft(QMarginsF* theWrappedObject, qreal  left)
{
  ( theWrappedObject->setLeft(left));
}

void PythonQtWrapper_QMarginsF::setRight(QMarginsF* theWrappedObject, qreal  right)
{
  ( theWrappedObject->setRight(right));
}

void PythonQtWrapper_QMarginsF::setTop(QMarginsF* theWrappedObject, qreal  top)
{
  ( theWrappedObject->setTop(top));
}

QMargins  PythonQtWrapper_QMarginsF::toMargins(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->toMargins());
}

qreal  PythonQtWrapper_QMarginsF::top(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QString PythonQtWrapper_QMarginsF::py_toString(QMarginsF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMessageAuthenticationCode* PythonQtWrapper_QMessageAuthenticationCode::new_QMessageAuthenticationCode(QCryptographicHash::Algorithm  method, const QByteArray&  key)
{ 
return new QMessageAuthenticationCode(method, key); }

bool  PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device)
{
  return ( theWrappedObject->addData(device));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const char*  data, int  length)
{
  ( theWrappedObject->addData(data, length));
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method)
{
  return (QMessageAuthenticationCode::hash(message, key, method));
}

void PythonQtWrapper_QMessageAuthenticationCode::reset(QMessageAuthenticationCode* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::result(QMessageAuthenticationCode* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

void PythonQtWrapper_QMessageAuthenticationCode::setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key)
{
  ( theWrappedObject->setKey(key));
}


