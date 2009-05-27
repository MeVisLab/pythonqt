#ifndef PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV2_H
#define PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV2_H

#include <qstyleoption.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QStyleOptionFrameV2 : public QStyleOptionFrameV2
{
public:
    PythonQtShell_QStyleOptionFrameV2():QStyleOptionFrameV2(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrameV2(const QStyleOptionFrame&  other):QStyleOptionFrameV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrameV2(const QStyleOptionFrameV2&  other):QStyleOptionFrameV2(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrameV2(int  version):QStyleOptionFrameV2(version),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionFrameV2 : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionVersion FrameFeature )
Q_FLAGS(FrameFeatures )
enum StyleOptionVersion{
  Version = QStyleOptionFrameV2::Version};
enum FrameFeature{
  None = QStyleOptionFrameV2::None,   Flat = QStyleOptionFrameV2::Flat};
Q_DECLARE_FLAGS(FrameFeatures, FrameFeature)
public slots:
QStyleOptionFrameV2* new_QStyleOptionFrameV2();
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrame&  other);
QStyleOptionFrameV2* new_QStyleOptionFrameV2(const QStyleOptionFrameV2&  other);
void delete_QStyleOptionFrameV2(QStyleOptionFrameV2* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QSTYLEOPTIONFRAMEV2_H
