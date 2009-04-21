#ifndef PYTHONQTWRAPPER_QCLIPBOARDEVENT_H
#define PYTHONQTWRAPPER_QCLIPBOARDEVENT_H

#include <qevent.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>

class PythonQtWrapper_QClipboardEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QClipboardEvent(QClipboardEvent* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QCLIPBOARDEVENT_H
