#include <PythonQt.h>
#include "PythonQtWrapper_QSvgRenderer.h"
#include "PythonQtWrapper_QSvgGenerator.h"
#include "PythonQtWrapper_QSvgWidget.h"


void PythonQt_init_QtSvg() {
PythonQt::self()->registerClass(&QSvgRenderer::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgRenderer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgRenderer>);
PythonQt::self()->registerCPPClass("QSvgGenerator", "", "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgGenerator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgGenerator>);
PythonQt::self()->addParentClass("QSvgGenerator", "QPaintDevice",PythonQtUpcastingOffset<QSvgGenerator,QPaintDevice>());
PythonQt::self()->registerClass(&QSvgWidget::staticMetaObject, "QtSvg", PythonQtCreateObject<PythonQtWrapper_QSvgWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSvgWidget>);

}
