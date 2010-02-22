#include <PythonQt.h>
#include "com_trolltech_qt_core_builtin0.h"

void PythonQt_init_QtCoreBuiltin() {
PythonQt::self()->registerCPPClass("QDateTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDateTime>);
PythonQt::self()->registerCPPClass("QRect", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRect>);
PythonQt::self()->registerCPPClass("QTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTime>);
PythonQt::self()->registerCPPClass("QLocale", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLocale>);
PythonQt::self()->registerCPPClass("QPointF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPointF>);
PythonQt::self()->registerCPPClass("QSize", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSize>);
PythonQt::self()->registerCPPClass("QLine", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLine>);
PythonQt::self()->registerCPPClass("QBitArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBitArray>);
PythonQt::self()->registerCPPClass("QUrl", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUrl>);
PythonQt::self()->registerCPPClass("QSizeF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSizeF>);
PythonQt::self()->registerCPPClass("QRegExp", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRegExp>);
PythonQt::self()->registerCPPClass("QLineF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLineF>);
PythonQt::self()->registerCPPClass("QRectF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRectF>);
PythonQt::self()->registerCPPClass("QDate", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDate>);
PythonQt::self()->registerCPPClass("QPoint", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPoint>);
PythonQt::self()->registerCPPClass("Qt", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_Qt>);

}
