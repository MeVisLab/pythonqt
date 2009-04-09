#ifndef PYTHONQTWRAPPER_QRESIZEEVENT_H
#define PYTHONQTWRAPPER_QRESIZEEVENT_H

#include <qevent.h>
#include <QObject>

#include <QVariant>
#include <qsize.h>

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; } 
   const QSize&  oldSize(QResizeEvent* theWrappedObject) const;
   const QSize&  size(QResizeEvent* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QRESIZEEVENT_H
