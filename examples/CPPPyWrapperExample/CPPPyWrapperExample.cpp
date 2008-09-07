#include <PythonQt.h>
#include <QtGui>
int main (int argc, char* argv[]) {
    QApplication app(argc, argv);
    PythonQt::init();
    PythonQtObjectPtr mainModule = PythonQt::self()->getMainModule();
    Q_ASSERT(!mainModule.isNull());
    { 
      // evaluate a python file embedded in executable as resource:
      mainModule.evalFile(":eyed3tagger.py");
      // create an object, hold onto its reference
      PythonQtObjectPtr tag = mainModule.evalScript("EyeD3Tagger()\n", Py_eval_input);
      Q_ASSERT(!tag.isNull());
      tag.call("setFileName", QVariantList() << "t.mp3");
      QVariant fn = tag.call("fileName", QVariantList());
      Q_ASSERT(fn.toString() == QString("t.mp3"));
      // tag goes out of scope, reference count decremented.
    }
    qDebug() << "test1";
    { // alternative using import and loading it as a real module from sys.path
      // import sys first
      mainModule.evalScript(QString("import sys\n"));
      // append the current directory to the sys.path
      mainModule.evalScript(QString("sys.path.append('%1')\n").arg(QDir::currentPath()));
      mainModule.evalScript("import eyed3tagger\n");
      PythonQtObjectPtr tag = mainModule.evalScript("eyed3tagger.EyeD3Tagger()\n", Py_eval_input);
      Q_ASSERT(!tag.isNull());
      tag.call("setFileName", QVariantList() << "t.mp3");
      QVariant fn = tag.call("fileName", QVariantList());
      Q_ASSERT(fn.toString() == QString("t.mp3"));
    }

    qDebug() << "finished";
    return 0;
}
