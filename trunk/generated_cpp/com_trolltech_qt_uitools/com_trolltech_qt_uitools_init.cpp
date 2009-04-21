#include <PythonQt.h>
#include "PythonQtWrapper_QUiLoader.h"


void PythonQt_init_QtUiTools() {
PythonQt::self()->registerClass(&QUiLoader::staticMetaObject, "QtUiTools", PythonQtCreateObject<PythonQtWrapper_QUiLoader>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUiLoader>);

}
