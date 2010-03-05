#include <PythonQt.h>
#include "com_trolltech_qt_core_builtin0.h"

void PythonQt_init_QtCoreBuiltin(PyObject* module) {
PythonQt::priv()->registerCPPClass("QDateTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDateTime>, NULL, module);
PythonQt::priv()->registerCPPClass("QRect", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRect>, NULL, module);
PythonQt::priv()->registerCPPClass("QTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTime>, NULL, module);
PythonQt::priv()->registerCPPClass("QLocale", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLocale>, NULL, module);
PythonQt::priv()->registerCPPClass("QPointF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPointF>, NULL, module);
PythonQt::priv()->registerCPPClass("QSize", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSize>, NULL, module);
PythonQt::priv()->registerCPPClass("QBitArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBitArray>, NULL, module);
PythonQt::priv()->registerCPPClass("QUrl", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUrl>, NULL, module);
PythonQt::priv()->registerCPPClass("QSizeF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSizeF>, NULL, module);
PythonQt::priv()->registerCPPClass("QRegExp", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRegExp>, NULL, module);
PythonQt::priv()->registerCPPClass("QRectF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRectF>, NULL, module);
PythonQt::priv()->registerCPPClass("QDate", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDate>, NULL, module);
PythonQt::priv()->registerCPPClass("QPoint", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPoint>, NULL, module);
PythonQt::priv()->registerCPPClass("Qt", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_Qt>, NULL, module);

}
