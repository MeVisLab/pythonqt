#include <PythonQt.h>
#include "PythonQtWrapper_QSvgGenerator.h"
#include "PythonQtWrapper_QSvgRenderer.h"
#include "PythonQtWrapper_QSvgWidget.h"

void PythonQt_init_QtSvg() {
PythonQt::self()->registerCPPClass("QSvgGenerator", "", "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgGenerator>);
PythonQt::self()->registerClass(&QSvgRenderer::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgRenderer>);
PythonQt::self()->registerClass(&QSvgWidget::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgWidget>);

}
