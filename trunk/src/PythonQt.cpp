/*
*
*  Copyright (C) 2006 MeVis Research GmbH All Rights Reserved.
*
*  This library is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation; either
*  version 2.1 of the License, or (at your option) any later version.
*
*  This library is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  Lesser General Public License for more details.
*
*  Further, this software is distributed without any warranty that it is
*  free of the rightful claim of any third person regarding infringement
*  or the like.  Any license provided herein, whether implied or
*  otherwise, applies only to this software file.  Patent licenses, if
*  any, provided herein do not apply to combinations of this program with
*  other software, or any other product whatsoever.
*
*  You should have received a copy of the GNU Lesser General Public
*  License along with this library; if not, write to the Free Software
*  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*  Contact information: MeVis Research GmbH, Universitaetsallee 29,
*  28359 Bremen, Germany or:
*
*  http://www.mevis.de
*
*/

//----------------------------------------------------------------------------------
/*!
// \file    PythonQt.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtImporter.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"
#include "PythonQtSignalReceiver.h"
#include "PythonQtConversion.h"
#include "PythonQtStdOut.h"
#include "PythonQtCppWrapperFactory.h"
#include "PythonQtVariants.h"
#include "PythonQtStdDecorators.h"
#include "PythonQtQFileImporter.h"
#include <pydebug.h>
#include <vector>

PythonQt* PythonQt::_self = NULL;
int       PythonQt::_uniqueModuleCount = 0;

void PythonQt::init(int flags)
{
  if (!_self) {
    _self = new PythonQt(flags);
  }

  PythonQtMethodInfo::addParameterTypeAlias("QObjectList", "QList<QObject*>");
  qRegisterMetaType<QList<QObject*> >("QList<void*>");
  
  PythonQtRegisterToolClassesTemplateConverter(int);
  PythonQtRegisterToolClassesTemplateConverter(float);
  PythonQtRegisterToolClassesTemplateConverter(double);
  // TODO: which other POD types should be available for QList etc.

  PythonQt::self()->addDecorators(new PythonQtStdDecorators());

  PythonQt::self()->registerCPPClass("Qt", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_Qt>);
  PythonQt::self()->registerCPPClass("QBitArray", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBitArray>);
  PythonQt::self()->registerCPPClass("QDate", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDate>);
  PythonQt::self()->registerCPPClass("QTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTime>);
  PythonQt::self()->registerCPPClass("QDateTime", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDateTime>);
  PythonQt::self()->registerCPPClass("QUrl", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUrl>);
  PythonQt::self()->registerCPPClass("QLocale", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLocale>);
  PythonQt::self()->registerCPPClass("QRect", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRect>);
  PythonQt::self()->registerCPPClass("QRectF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRectF>);
  PythonQt::self()->registerCPPClass("QSize", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSize>);
  PythonQt::self()->registerCPPClass("QSizeF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSizeF>);
  PythonQt::self()->registerCPPClass("QLine", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLine>);
  PythonQt::self()->registerCPPClass("QLineF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLineF>);
  PythonQt::self()->registerCPPClass("QPoint", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPoint>);
  PythonQt::self()->registerCPPClass("QPointF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QPointF>);
  PythonQt::self()->registerCPPClass("QRegExp", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRegExp>);

  PythonQtRegisterToolClassesTemplateConverter(QDate);
  PythonQtRegisterToolClassesTemplateConverter(QTime);
  PythonQtRegisterToolClassesTemplateConverter(QDateTime);
  PythonQtRegisterToolClassesTemplateConverter(QUrl);
  PythonQtRegisterToolClassesTemplateConverter(QLocale);
  PythonQtRegisterToolClassesTemplateConverter(QRect);
  PythonQtRegisterToolClassesTemplateConverter(QRectF);
  PythonQtRegisterToolClassesTemplateConverter(QSize);
  PythonQtRegisterToolClassesTemplateConverter(QSizeF);
  PythonQtRegisterToolClassesTemplateConverter(QLine);
  PythonQtRegisterToolClassesTemplateConverter(QLineF);
  PythonQtRegisterToolClassesTemplateConverter(QPoint);
  PythonQtRegisterToolClassesTemplateConverter(QPointF);
  PythonQtRegisterToolClassesTemplateConverter(QRegExp);
  
  PythonQt::self()->registerCPPClass("QFont", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFont>);
  PythonQt::self()->registerCPPClass("QPixmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixmap>);
  PythonQt::self()->registerCPPClass("QBrush", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBrush>);
  PythonQt::self()->registerCPPClass("QColor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QColor>);
  PythonQt::self()->registerCPPClass("QPalette", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPalette>);
  PythonQt::self()->registerCPPClass("QIcon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIcon>);
  PythonQt::self()->registerCPPClass("QImage", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImage>);
  PythonQt::self()->registerCPPClass("QPolygon", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygon>);
  PythonQt::self()->registerCPPClass("QRegion", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRegion>);
  PythonQt::self()->registerCPPClass("QBitmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBitmap>);
  PythonQt::self()->registerCPPClass("QCursor", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCursor>);
  PythonQt::self()->registerCPPClass("QSizePolicy", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSizePolicy>);
  PythonQt::self()->registerCPPClass("QKeySequence", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeySequence>);
  PythonQt::self()->registerCPPClass("QPen", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPen>);
  PythonQt::self()->registerCPPClass("QTextLength", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLength>);
  PythonQt::self()->registerCPPClass("QTextFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFormat>);
  PythonQt::self()->registerCPPClass("QMatrix", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMatrix>);

  PythonQtRegisterToolClassesTemplateConverter(QFont);
  PythonQtRegisterToolClassesTemplateConverter(QPixmap);
  PythonQtRegisterToolClassesTemplateConverter(QBrush);
  PythonQtRegisterToolClassesTemplateConverter(QColor);
  PythonQtRegisterToolClassesTemplateConverter(QPalette);
  PythonQtRegisterToolClassesTemplateConverter(QIcon);
  PythonQtRegisterToolClassesTemplateConverter(QImage);
  PythonQtRegisterToolClassesTemplateConverter(QPolygon);
  PythonQtRegisterToolClassesTemplateConverter(QRegion);
  PythonQtRegisterToolClassesTemplateConverter(QBitmap);
  PythonQtRegisterToolClassesTemplateConverter(QCursor);
  PythonQtRegisterToolClassesTemplateConverter(QSizePolicy);
  PythonQtRegisterToolClassesTemplateConverter(QKeySequence);
  PythonQtRegisterToolClassesTemplateConverter(QPen);
  PythonQtRegisterToolClassesTemplateConverter(QTextLength);
  PythonQtRegisterToolClassesTemplateConverter(QTextFormat);
  PythonQtRegisterToolClassesTemplateConverter(QMatrix);

}

void PythonQt::cleanup()
{
  if (_self) {
    delete _self;
    _self = NULL;
  }
}

PythonQt::PythonQt(int flags)
{
  _p = new PythonQtPrivate;
  _p->_initFlags = flags;

  _p->_PythonQtObjectPtr_metaId = qRegisterMetaType<PythonQtObjectPtr>("PythonQtObjectPtr");
  
  Py_SetProgramName("PythonQt");
  if (flags & IgnoreSiteModule) {
    // this prevents the automatic importing of Python site files
    Py_NoSiteFlag = 1;
  }
  Py_Initialize();
  
  // add our own python object types for qt object slots
  if (PyType_Ready(&PythonQtSlotFunction_Type) < 0) {
    std::cerr << "could not initialize PythonQtSlotFunction_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtSlotFunction_Type);
  
  // add our own python object types for qt objects
  if (PyType_Ready(&PythonQtWrapper_Type) < 0) {
    std::cerr << "could not initialize PythonQtWrapper_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtWrapper_Type);
  
  // add our own python object types for qt objects
  if (PyType_Ready(&PythonQtMetaObjectWrapper_Type) < 0) {
    std::cerr << "could not initialize PythonQtMetaObjectWrapper_Type" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtMetaObjectWrapper_Type);
  
  // add our own python object types for redirection of stdout
  if (PyType_Ready(&PythonQtStdOutRedirectType) < 0) {
    std::cerr << "could not initialize PythonQtStdOutRedirectType" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
  }
  Py_INCREF(&PythonQtStdOutRedirectType);
  
  initPythonQtModule(flags & RedirectStdOut);

}

PythonQt::~PythonQt() {
  delete _p;
  _p = NULL;
}

PythonQtPrivate::~PythonQtPrivate() {
  delete _defaultImporter;
  _defaultImporter = NULL;
  {
    QHashIterator<QByteArray, PythonQtSlotInfo *> i(_knownQtDecoratorSlots);
    while (i.hasNext()) {
      delete i.next().value();
    }
  }
  {
    QHashIterator<QByteArray, PythonQtClassInfo *> i(_knownQtClasses);
    while (i.hasNext()) {
      delete i.next().value();
    }
  }
  {
    QHashIterator<QByteArray, PythonQtClassInfo *> i(_knownQtWrapperClasses);
    while (i.hasNext()) {
      delete i.next().value();
    }
  }
  {
    QHashIterator<QByteArray, PythonQtSlotInfo *> i(_constructorSlots);
    while (i.hasNext()) {
      PythonQtSlotInfo* cur = i.next().value();
      while(cur->nextInfo()) {
        PythonQtSlotInfo* next = cur->nextInfo();
        delete cur;
        cur = next;
      }
      delete cur;
    }
  }
  {
    QHashIterator<QByteArray, PythonQtSlotInfo *> i(_destructorSlots);
    while (i.hasNext()) {
      PythonQtSlotInfo* cur = i.next().value();
      while(cur->nextInfo()) {
        PythonQtSlotInfo* next = cur->nextInfo();
        delete cur;
        cur = next;
      }
      delete cur;
    }
  }
  PythonQtConv::global_valueStorage.clear();
  PythonQtConv::global_ptrStorage.clear();
  PythonQtConv::global_variantStorage.clear();

  PythonQtMethodInfo::cleanupCachedMethodInfos();
}

PythonQtImportFileInterface* PythonQt::importInterface()
{
  return _self->_p->_importInterface?_self->_p->_importInterface:_self->_p->_defaultImporter;
}

void PythonQt::qObjectNoLongerWrappedCB(QObject* o)
{
  if (_self->_p->_noLongerWrappedCB) {
    (*_self->_p->_noLongerWrappedCB)(o);
  };
}

void PythonQt::registerClass(const QMetaObject* metaobject, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator)
{
  _p->registerClass(metaobject, package, wrapperCreator);
}

void PythonQtPrivate::registerClass(const QMetaObject* metaobject, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator)
{
  // we register all classes in the hierarchy
  const QMetaObject* m = metaobject;
  bool first = true;
  while (m) {
    PythonQtClassInfo* info = _knownQtClasses.value(m->className());
    if (!info) {
      info = new PythonQtClassInfo(m);
      _knownQtClasses.insert(m->className(), info);
      PythonQtObjectPtr pack = packageByName(package);
      PyObject* pyobj = (PyObject*)createNewPythonQtMetaObjectWrapper(info);
      PyModule_AddObject(pack, m->className(), pyobj);
      if (package && strncmp(package,"Qt",2)==0) {
        // put all qt objects into Qt as well
        PythonQtObjectPtr pack = packageByName("Qt");
        PyModule_AddObject(pack, m->className(), pyobj);
      }
    }
    if (first) {
      first = false;
      if (wrapperCreator) {
        info->setDecoratorProvider(wrapperCreator);
      }
    }
    m = m->superClass();
  }
}

bool PythonQtPrivate::isEnumType(const QMetaObject* meta, const QByteArray& name) {
  int i = meta?meta->indexOfEnumerator(name.constData()):-1;
  if (i!=-1) {
    return true;
  } else {
    // look for scope
    int scopePos = name.indexOf("::");
    if (scopePos != -1) {
      // slit into scope and enum name
      QByteArray enumScope = name.mid(0,scopePos);
      QByteArray enumName = name.mid(scopePos+2);
      if (enumScope == "Qt") {
        // special qt namespace case
        return isEnumType(&staticQtMetaObject, enumName);
      } else {
        // look for known classes as scope
        // TODO: Q_GADGETS are not yet handled
        PythonQtClassInfo* info = _knownQtClasses.value(enumScope);
        if (info) {
          return isEnumType(info->metaObject(), enumName);
        }
      }
    }
  }
  return false;
}

PyObject* PythonQtPrivate::wrapQObject(QObject* obj)
{
  if (!obj) {
    Py_INCREF(Py_None);
    return Py_None;
  }
  PythonQtWrapper* wrap = findWrapperAndRemoveUnused(obj);
  if (!wrap) {
    // smuggling it in...
    PythonQtClassInfo* classInfo = _knownQtClasses.value(obj->metaObject()->className());
    if (!classInfo) {
      registerClass(obj->metaObject());
      classInfo = _knownQtClasses.value(obj->metaObject()->className());
    }
    wrap = createNewPythonQtWrapper(obj, classInfo);
    //    mlabDebugConst("MLABPython","new qobject wrapper added " << " " << wrap->_obj->className() << " " << wrap->_info->wrappedClassName().latin1());
  } else {
    Py_INCREF(wrap);
    //    mlabDebugConst("MLABPython","qobject wrapper reused " << wrap->_obj->className() << " " << wrap->_info->wrappedClassName().latin1());
  }
  return (PyObject*)wrap;
}

PyObject* PythonQtPrivate::wrapPtr(void* ptr, const QByteArray& name)
{
  if (!ptr) {
    Py_INCREF(Py_None);
    return Py_None;
  }
  PythonQtWrapper* wrap = findWrapperAndRemoveUnused(ptr);
  if (!wrap) {
    PythonQtClassInfo* info = _knownQtClasses.value(name);
    if (!info) {
      // we do not know the metaobject yet, but we might know it by it's name:
      if (_knownQObjectClassNames.find(name)!=_knownQObjectClassNames.end()) {
        // yes, we know it, so we can convert to QObject
        QObject* qptr = (QObject*)ptr;
        registerClass(qptr->metaObject());
        info = _knownQtClasses.value(qptr->metaObject()->className());
      }
    }
    if (info) {
      QObject* qptr = (QObject*)ptr;
      // if the object is a derived object, we want to switch the class info to the one of the derived class:
      if (name!=(qptr->metaObject()->className())) {
        registerClass(qptr->metaObject());
        info = _knownQtClasses.value(qptr->metaObject()->className());
      }
      wrap = createNewPythonQtWrapper(qptr, info);
      //    mlabDebugConst("MLABPython","new qobject wrapper added " << " " << wrap->_obj->className() << " " << wrap->_info->wrappedClassName().latin1());
    } else {
      // maybe it is a PyObject, which we can return directly
      if (name == "PyObject") {
        PyObject* p = (PyObject*)ptr;
        Py_INCREF(p);
        return p;
      }
        // not a known QObject, so try our wrapper factory:
      QObject* wrapper = NULL;
      for (int i=0; i<_cppWrapperFactories.size(); i++) {
        wrapper = _cppWrapperFactories.at(i)->create(name, ptr);
        if (wrapper) {
          break;
        }
      }
      PythonQtClassInfo* info = _knownQtWrapperClasses.value(name);
      if (!info) {
        info = new PythonQtClassInfo(wrapper?wrapper->metaObject():NULL, name);
        _knownQtWrapperClasses.insert(name, info);
        PyModule_AddObject(_pythonQtModule, name, (PyObject*)createNewPythonQtMetaObjectWrapper(info));
      } else {
        if (wrapper && (info->metaObject() != wrapper->metaObject())) {
          info->setMetaObject(wrapper->metaObject());
        }
      }
      wrap = createNewPythonQtWrapper(wrapper, info, ptr);
      //          mlabDebugConst("MLABPython","new c++ wrapper added " << wrap->_wrappedPtr << " " << wrap->_obj->className() << " " << wrap->_info->wrappedClassName().latin1());
    }
  } else {
    Py_INCREF(wrap);
    //mlabDebugConst("MLABPython","c++ wrapper reused " << wrap->_wrappedPtr << " " << wrap->_obj->className() << " " << wrap->_info->wrappedClassName().latin1());
  }
  return (PyObject*)wrap;
}


PythonQtWrapper* PythonQtPrivate::createNewPythonQtWrapper(QObject* obj, PythonQtClassInfo* info, void* wrappedPtr) {
  PythonQtWrapper* result;
  result = (PythonQtWrapper *)PythonQtWrapper_Type.tp_new(&PythonQtWrapper_Type,
    NULL, NULL);

  result->setQObject(obj);
  result->_info = info;
  result->_wrappedPtr = wrappedPtr;
  result->_ownedByPythonQt = false;
  result->_useQMetaTypeDestroy = false;
  
  if (wrappedPtr) {
    _wrappedObjects.insert(wrappedPtr, result);
  } else {
    _wrappedObjects.insert(obj, result);
    if (obj->parent()== NULL && _wrappedCB) {
      // tell someone who is interested that the qobject is wrapped the first time, if it has no parent
      (*_wrappedCB)(obj);
    }
  }
  return result;
}

PythonQtMetaObjectWrapper* PythonQtPrivate::createNewPythonQtMetaObjectWrapper(PythonQtClassInfo* info) {
  PythonQtMetaObjectWrapper* result;
  result = (PythonQtMetaObjectWrapper *)PythonQtMetaObjectWrapper_Type.tp_new(&PythonQtMetaObjectWrapper_Type,
    NULL, NULL);
  result->_info = info;
  return result;
}


PythonQtSignalReceiver* PythonQt::getSignalReceiver(QObject* obj)
{
  PythonQtSignalReceiver* r = _p->_signalReceivers[obj];
  if (!r) {
    r = new PythonQtSignalReceiver(obj);
    _p->_signalReceivers.insert(obj, r);
  }
  return r;
}

bool PythonQt::addSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname)
{
  bool flag = false;
  PythonQtObjectPtr callable = lookupCallable(module, objectname);
  if (callable) {
    PythonQtSignalReceiver* r = getSignalReceiver(obj);
    flag = r->addSignalHandler(signal, callable);
    if (!flag) {
      // signal not found
    }
  } else {
    // callable not found
  }
  return flag;
}

bool PythonQt::addSignalHandler(QObject* obj, const char* signal, PyObject* receiver)
{
  bool flag = false;
  PythonQtSignalReceiver* r = getSignalReceiver(obj);
  if (r) {
    flag = r->addSignalHandler(signal, receiver);
  }
  return flag;
}

bool PythonQt::removeSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname)
{
  bool flag = false;
  PythonQtObjectPtr callable = lookupCallable(module, objectname);
  if (callable) {
    PythonQtSignalReceiver* r = _p->_signalReceivers[obj];
    if (r) {
      flag = r->removeSignalHandler(signal, callable);
    }
  } else {
    // callable not found
  }
  return flag;
}

bool PythonQt::removeSignalHandler(QObject* obj, const char* signal, PyObject* receiver)
{
  bool flag = false;
  PythonQtSignalReceiver* r = _p->_signalReceivers[obj];
  if (r) {
    flag = r->removeSignalHandler(signal, receiver);
  }
  return flag;
}

PythonQtObjectPtr PythonQt::lookupCallable(PyObject* module, const QString& name)
{
  PythonQtObjectPtr p = lookupObject(module, name);
  if (p) {
    if (PyCallable_Check(p)) {
      return p;
    }
  }
  PyErr_Clear();
  return NULL;
}

PythonQtObjectPtr PythonQt::lookupObject(PyObject* module, const QString& name)
{
  QStringList l = name.split('.');
  PythonQtObjectPtr p = module;
  PythonQtObjectPtr prev;
  QString s;
  QByteArray b;
  for (QStringList::ConstIterator i = l.begin(); i!=l.end() && p; ++i) {
    prev = p;
    b = (*i).toLatin1();
    p.setNewRef(PyObject_GetAttrString(p, b.data()));
  }
  PyErr_Clear();
  return p;
}

PythonQtObjectPtr PythonQt::getMainModule() {
  //both borrowed
  PythonQtObjectPtr dict = PyImport_GetModuleDict();
  return PyDict_GetItemString(dict, "__main__");
}

QVariant PythonQt::evalCode(PyObject* module, PyObject* pycode) {
  QVariant result;
  if (pycode) {
    PyObject* r = PyEval_EvalCode((PyCodeObject*)pycode, PyModule_GetDict((PyObject*)module) , PyModule_GetDict((PyObject*)module));
    if (r) {
      result = PythonQtConv::PyObjToQVariant(r);
      Py_DECREF(r);
    } else {
      handleError();
    }
  } else {
    handleError();
  }
  return result;
}

QVariant PythonQt::evalScript(PyObject* module, const QString& script, int start)
{
  QVariant result;
  PythonQtObjectPtr p;
  p.setNewRef(PyRun_String(script.toLatin1().data(), start, PyModule_GetDict(module), PyModule_GetDict(module)));
  if (p) {
    result = PythonQtConv::PyObjToQVariant(p);
  } else {
    handleError();
  }
  return result;
}

void PythonQt::evalFile(PyObject* module, const QString& filename)
{
  PythonQtObjectPtr code = parseFile(filename);
  if (code) {
    evalCode(module, code);
  } else {
    handleError();
  }
}

PythonQtObjectPtr PythonQt::parseFile(const QString& filename)
{
  PythonQtObjectPtr p;
  p.setNewRef(PythonQtImport::getCodeFromPyc(filename));
  if (!p) {
    handleError();
  }
  return p;
}

PythonQtObjectPtr PythonQt::createModuleFromFile(const QString& name, const QString& filename)
{
  PythonQtObjectPtr code = parseFile(filename);
  PythonQtObjectPtr module = _p->createModule(name, code);
  return module;
}

PythonQtObjectPtr PythonQt::createModuleFromScript(const QString& name, const QString& script)
{
  PyErr_Clear();
  QString scriptCode = script;
  if (scriptCode.isEmpty()) {
    // we always need at least a linefeed
    scriptCode = "\n";
  }
  PythonQtObjectPtr pycode;
  pycode.setNewRef(Py_CompileString((char*)scriptCode.toLatin1().data(), "",  Py_file_input));
  PythonQtObjectPtr module = _p->createModule(name, pycode);
  return module;
}

PythonQtObjectPtr PythonQt::createUniqueModule()
{
  static QString pyQtStr("PythonQt_module");
  QString moduleName = pyQtStr+QString::number(_uniqueModuleCount++);
  return createModuleFromScript(moduleName);
}

void PythonQt::addObject(PyObject* module, const QString& name, QObject* object)
{
  PyModule_AddObject(module, name.toLatin1().data(), _p->wrapQObject(object));
}

void PythonQt::addVariable(PyObject* module, const QString& name, const QVariant& v)
{
  PyModule_AddObject(module, name.toLatin1().data(), PythonQtConv::QVariantToPyObject(v));
}

void PythonQt::removeVariable(PyObject* module, const QString& name)
{
  PyObject_DelAttrString(module, name.toLatin1().data());
}

QVariant PythonQt::getVariable(PyObject* module, const QString& objectname)
{
  QVariant result;
  PythonQtObjectPtr obj = lookupObject(module, objectname);
  if (obj) {
    result = PythonQtConv::PyObjToQVariant(obj);
  }
  return result;
}

QStringList PythonQt::introspection(PyObject* module, const QString& objectname, PythonQt::ObjectType type)
{
  QStringList results;
  
  PythonQtObjectPtr object;
  if (objectname.isEmpty()) {
    object = module;
  } else {
    object = lookupObject(module, objectname);
    if (!object && type == CallOverloads) {
      PyObject* dict = lookupObject(module, "__builtins__");
      if (dict) {
        object = PyDict_GetItemString(dict, objectname.toLatin1().constData());
      }
    }
  }

  if (object) {
    if (type == CallOverloads) {
      if (PythonQtSlotFunction_Check(object)) {
        PythonQtSlotFunctionObject* o = (PythonQtSlotFunctionObject*)object.object();
        PythonQtSlotInfo* info = o->m_ml;
        
        while (info) {
          results << info->fullSignature(info->isInstanceDecorator());
          info = info->nextInfo();
        }
      } else if (object->ob_type == &PythonQtMetaObjectWrapper_Type) {
        PythonQtMetaObjectWrapper* o = (PythonQtMetaObjectWrapper*)object.object();
        PythonQtSlotInfo* info = o->_info->constructors();
    
        while (info) {
          results << info->fullSignature(false);
          info = info->nextInfo();
        }
      } else {
        //TODO: use pydoc!
        PyObject* doc = PyObject_GetAttrString(object, "__doc__");
        if (doc) {
          results << PyString_AsString(doc);
          Py_DECREF(doc);
        }
      }
    } else {
      PyObject* keys = PyObject_Dir(object);
      if (keys) {
        int count = PyList_Size(keys);
        PyObject* key;
        PyObject* value;
        QString keystr;
        for (int i = 0;i<count;i++) {
          key = PyList_GetItem(keys,i);
          value = PyObject_GetAttr(object, key);
          if (!value) continue;
          keystr = PyString_AsString(key);
          static const QString underscoreStr("__tmp");
          if (!keystr.startsWith(underscoreStr)) {
            switch (type) {
            case Anything:
              results << keystr;
              break;
            case Class:
              if (value->ob_type == &PyClass_Type) {
                results << keystr;
              }
              break;
            case Variable:
              if (value->ob_type != &PyClass_Type
                && value->ob_type != &PyCFunction_Type
                && value->ob_type != &PyFunction_Type
                && value->ob_type != &PyModule_Type
                ) {
                results << keystr;
              }
              break;
            case Function:
              if (value->ob_type == &PyFunction_Type ||
                value->ob_type == &PyMethod_Type
                ) {
                results << keystr;
              }
              break;
            case Module:
              if (value->ob_type == &PyModule_Type) {
                results << keystr;
              }
              break;
            default:
              std::cerr << "PythonQt: introspection: unknown case" << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
            }
          }
          Py_DECREF(value);
        }
        Py_DECREF(keys);
      }
    }
  }
  return results;
}

QVariant PythonQt::call(PyObject* module, const QString& name, const QVariantList& args)
{
  QVariant r;
  
  PythonQtObjectPtr callable = lookupCallable(module, name);
  if (callable) {
    PythonQtObjectPtr pargs;
    int count = args.size();
    if (count>0) {
      pargs.setNewRef(PyTuple_New(count));
    }
    bool err = false;
    // transform QVariants to Python
    for (int i = 0; i < count; i++) {
      PyObject* arg = PythonQtConv::QVariantToPyObject(args.at(i));
      if (arg) {
        // steals reference, no unref
        PyTuple_SetItem(pargs, i,arg);
      } else {
        err = true;
        break;
      }
    }
    
    if (!err) {
      PyErr_Clear();
      PythonQtObjectPtr result;
      result.setNewRef(PyObject_CallObject(callable, pargs));
      if (result) {
        // ok
        r = PythonQtConv::PyObjToQVariant(result);
      } else {
        PythonQt::self()->handleError();
      }
    }
  }
  return r;
}

void PythonQt::addInstanceDecorators(QObject* o)
{
  _p->addDecorators(o, PythonQtPrivate::InstanceDecorator);
}

void PythonQt::addClassDecorators(QObject* o)
{
  _p->addDecorators(o, PythonQtPrivate::StaticDecorator | PythonQtPrivate::ConstructorDecorator | PythonQtPrivate::DestructorDecorator);
}

void PythonQt::addDecorators(QObject* o)
{
  _p->addDecorators(o, PythonQtPrivate::AllDecorators);
}

void PythonQt::registerQObjectClassNames(const QStringList& names)
{
  _p->registerQObjectClassNames(names);
}

void PythonQt::setImporter(PythonQtImportFileInterface* importInterface)
{
  PythonQtImport::init();
  _p->_importInterface = importInterface;
}

void PythonQt::setImporterIgnorePaths(const QStringList& paths)
{
  _p->_importIgnorePaths = paths;
}

const QStringList& PythonQt::getImporterIgnorePaths()
{
  return _p->_importIgnorePaths;
}

void PythonQt::addWrapperFactory(PythonQtCppWrapperFactory* factory)
{
  _p->_cppWrapperFactories.append(factory);
}

void PythonQt::addConstructorHandler(PythonQtConstructorHandler* factory)
{
  _p->_constructorHandlers.append(factory);
}

const QList<PythonQtConstructorHandler*>& PythonQt::constructorHandlers()
{ 
  return _p->_constructorHandlers;
};

//---------------------------------------------------------------------------------------------------
PythonQtPrivate::PythonQtPrivate()
{
  _importInterface = NULL;
  _defaultImporter = new PythonQtQFileImporter;
  _noLongerWrappedCB = NULL;
  _wrappedCB = NULL;
}

void PythonQtPrivate::addDecorators(QObject* o, int decoTypes)
{
  o->setParent(this);
  int numMethods = o->metaObject()->methodCount();
  for (int i = 0; i < numMethods; i++) {
    QMetaMethod m = o->metaObject()->method(i);
    if ((m.methodType() == QMetaMethod::Method ||
      m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
     const PythonQtMethodInfo* info = PythonQtMethodInfo::getCachedMethodInfo(m);
      if (qstrncmp(m.signature(), "new_", 4)==0) {
        if ((decoTypes & ConstructorDecorator) == 0) continue; 
        // either it returns a * or a QVariant and the name starts with "new_"
        bool isVariantReturn = info->parameters().at(0).typeId == PythonQtMethodInfo::Variant;
        if ((info->parameters().at(0).isPointer || isVariantReturn)) {
          QByteArray signature = m.signature();
          QByteArray nameOfClass = signature.mid(4, signature.indexOf('(')-4);
          PythonQtSlotInfo* prev = _constructorSlots.value(nameOfClass);
          PythonQtSlotInfo* newSlot = new PythonQtSlotInfo(m, i, o, PythonQtSlotInfo::ClassDecorator);
          if (prev) {
            newSlot->setNextInfo(prev->nextInfo());
            prev->setNextInfo(newSlot);
          } else {
            _constructorSlots.insert(nameOfClass, newSlot);
          }
        }
      } else if (qstrncmp(m.signature(), "delete_", 7)==0) {
        if ((decoTypes & DestructorDecorator) == 0) continue; 
        QByteArray signature = m.signature();
        QByteArray nameOfClass = signature.mid(7, signature.indexOf('(')-7);
        PythonQtSlotInfo* newSlot = new PythonQtSlotInfo(m, i, o, PythonQtSlotInfo::ClassDecorator);
        _destructorSlots.insert(nameOfClass, newSlot);
      } else if (qstrncmp(m.signature(), "static_", 7)==0) {
        if ((decoTypes & StaticDecorator) == 0) continue; 
        QByteArray signature = m.signature();
        QByteArray nameOfClass = signature.mid(signature.indexOf('_')+1);
        nameOfClass = nameOfClass.mid(0, nameOfClass.indexOf('_'));
        PythonQtSlotInfo* slotCopy = new PythonQtSlotInfo(m, i, o, PythonQtSlotInfo::ClassDecorator);
        _knownQtDecoratorSlots.insert(nameOfClass, slotCopy);
      } else {
        if ((decoTypes & InstanceDecorator) == 0) continue; 
        if (info->parameters().count()>1) {
          PythonQtMethodInfo::ParameterInfo p = info->parameters().at(1);
          if (p.isPointer) {
            PythonQtSlotInfo* slotCopy = new PythonQtSlotInfo(m, i, o, PythonQtSlotInfo::InstanceDecorator);
            _knownQtDecoratorSlots.insert(p.name, slotCopy);
          }
        }
      }
    }
  }
}

void PythonQtPrivate::registerQObjectClassNames(const QStringList& names)
{
  foreach(QString name, names) {
    _knownQObjectClassNames.insert(name.toLatin1(), true);
  }
}

QList<PythonQtSlotInfo*> PythonQtPrivate::getDecoratorSlots(const QByteArray& className)
{
  return _knownQtDecoratorSlots.values(className);
}

void PythonQtPrivate::removeSignalEmitter(QObject* obj)
{
  _signalReceivers.remove(obj);
}

bool PythonQt::handleError()
{
  bool flag = false;
  if (PyErr_Occurred()) {
    
    // currently we just print the error and the stderr handler parses the errors
    PyErr_Print();
    
    /*
    // EXTRA: the format of the ptype and ptraceback is not really documented, so I use PyErr_Print() above
    PyObject *ptype;
    PyObject *pvalue;
    PyObject *ptraceback;
    PyErr_Fetch( &ptype, &pvalue, &ptraceback);
    
      Py_XDECREF(ptype);
      Py_XDECREF(pvalue);
      Py_XDECREF(ptraceback);
    */
    PyErr_Clear();
    flag = true;
  }
  return flag;
}

void PythonQt::overwriteSysPath(const QStringList& paths)
{
  PythonQtObjectPtr sys;
  sys.setNewRef(PyImport_ImportModule("sys"));
  PyModule_AddObject(sys, "path", PythonQtConv::QStringListToPyList(paths));
}

void PythonQt::setModuleImportPath(PyObject* module, const QStringList& paths)
{
  PyModule_AddObject(module, "__path__", PythonQtConv::QStringListToPyList(paths));
}

void PythonQt::stdOutRedirectCB(const QString& str)
{
  emit PythonQt::self()->pythonStdOut(str);
}

void PythonQt::stdErrRedirectCB(const QString& str)
{
  emit PythonQt::self()->pythonStdErr(str);
}

void PythonQt::setQObjectWrappedCallback(PythonQtQObjectWrappedCB* cb)
{
  _p->_wrappedCB = cb;
}

void PythonQt::setQObjectNoLongerWrappedCallback(PythonQtQObjectNoLongerWrappedCB* cb)
{
  _p->_noLongerWrappedCB = cb;
}



static PyMethodDef PythonQtMethods[] = {
  {NULL, NULL, 0, NULL}
};

void PythonQt::initPythonQtModule(bool redirectStdOut)
{
  _p->_pythonQtModule.setNewRef(Py_InitModule("PythonQt", PythonQtMethods));
  
  if (redirectStdOut) {
    PythonQtObjectPtr sys;
    PythonQtObjectPtr out;
    PythonQtObjectPtr err;
    sys.setNewRef(PyImport_ImportModule("sys"));
    // create a redirection object for stdout and stderr
    out = PythonQtStdOutRedirectType.tp_new(&PythonQtStdOutRedirectType,NULL, NULL);
    ((PythonQtStdOutRedirect*)out.object())->_cb = stdOutRedirectCB;
    err = PythonQtStdOutRedirectType.tp_new(&PythonQtStdOutRedirectType,NULL, NULL);
    ((PythonQtStdOutRedirect*)err.object())->_cb = stdErrRedirectCB;
    // replace the built in file objects with our own objects
    PyModule_AddObject(sys, "stdout", out);
    PyModule_AddObject(sys, "stderr", err);
  }
}

void PythonQt::registerCPPClass(const char* typeName, const char* parentTypeName, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator)
{
  _p->registerCPPClass(typeName, parentTypeName, package, wrapperCreator);
}


void PythonQtPrivate::registerCPPClass(const char* typeName, const char* parentTypeName, const char* package, PythonQtQObjectCreatorFunctionCB* wrapperCreator)
{
  PythonQtClassInfo* info = _knownQtWrapperClasses.value(typeName);
  if (!info) {
    info = new PythonQtClassInfo(NULL, typeName);
    _knownQtWrapperClasses.insert(typeName, info);
    PythonQtObjectPtr pack = packageByName(package);
    PyObject* pyobj = (PyObject*)createNewPythonQtMetaObjectWrapper(info);
    PyModule_AddObject(pack, typeName, pyobj);
    if (package && strncmp(package,"Qt",2)==0) {
      // put all qt objects into Qt as well
      PythonQtObjectPtr pack = packageByName("Qt");
      PyModule_AddObject(pack, typeName, pyobj);
    }
  }
  if (parentTypeName) {
    info->setWrappedParentClassName(parentTypeName);
  }
  if (wrapperCreator) {
    info->setDecoratorProvider(wrapperCreator);
  }
}

PythonQtObjectPtr PythonQtPrivate::packageByName(const char* name)
{
  if (name==NULL || name[0]==0) {
    return _pythonQtModule;
  }
  PythonQtObjectPtr v = _packages.value(name);
  if (!v) {
    v.setNewRef(PyImport_AddModule((QByteArray("PythonQt.") + name).constData()));
    _packages.insert(name, v);
    PyModule_AddObject(_pythonQtModule, name, v);
  }
  return v;
}


PyObject* PythonQt::helpCalled(PythonQtClassInfo* info)
{ 
  if (_p->_initFlags & ExternalHelp) {
    emit pythonHelpRequest(QByteArray(info->className()));
    return Py_BuildValue("");
  } else {
    return PyString_FromString(info->help().toLatin1().data());
  }
}

void PythonQtPrivate::removeWrapperPointer(void* obj)
{
  _wrappedObjects.remove(obj);
}

PythonQtWrapper* PythonQtPrivate::findWrapperAndRemoveUnused(void* obj)
{
  PythonQtWrapper* wrap = _wrappedObjects.value(obj);
  if (wrap && !wrap->_wrappedPtr && wrap->_obj == NULL) {
    // this is a wrapper whose QObject was already removed due to destruction
    // so the obj pointer has to be a new QObject with the same address...
    // we remove the old one and set the copy to NULL
    wrap->_objPointerCopy = NULL;
    removeWrapperPointer(obj);
    wrap = NULL;
  }
  return wrap;
}

PythonQtObjectPtr PythonQtPrivate::createModule(const QString& name, PyObject* pycode)
{
  PythonQtObjectPtr result;
  if (pycode) {
    result.setNewRef(PyImport_ExecCodeModule((char*)name.toLatin1().data(), pycode));
  } else {
    PythonQt::self()->handleError();
  }
  return result;
}
