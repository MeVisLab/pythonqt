#include <PythonQt.h>
#include "PythonQtWrapper_QGLColormap.h"
#include "PythonQtWrapper_QGLContext.h"
#include "PythonQtWrapper_QGLPixelBuffer.h"
#include "PythonQtWrapper_QGLFramebufferObject.h"
#include "PythonQtWrapper_QGLWidget.h"

void PythonQt_init_QtOpenGL() {
PythonQt::self()->registerCPPClass("QGLColormap", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLColormap>);
PythonQt::self()->registerCPPClass("QGLContext", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLContext>);
PythonQt::self()->registerCPPClass("QGLPixelBuffer", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLPixelBuffer>);
PythonQt::self()->registerCPPClass("QGLFramebufferObject", "", "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLFramebufferObject>);
PythonQt::self()->registerClass(&QGLWidget::staticMetaObject, "QtOpenGL", PythonQtCreateObject<PythonQtWrapper_QGLWidget>);

}
