#ifndef _PYTHONQT_H
#define _PYTHONQT_H

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
// \file    PythonQt.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtSystem.h"
#include "PythonQtWrapper.h"
#include "PythonQtSlot.h"
#include "PythonQtObjectPtr.h"
#include <QObject>
#include <QVariant>
#include <QList>
#include <QHash>
#include <QByteArray>
#include <QStringList>
#include <QtDebug>
#include <iostream>


class PythonQtClassInfo;
class PythonQtPrivate;
class PythonQtMethodInfo;
class PythonQtSignalReceiver;
class PythonQtImportFileInterface;
class PythonQtCppWrapperFactory;

//! the main interface to the Python Qt binding, realized as a singleton
class PYTHONQT_EXPORT PythonQt : public QObject {

  Q_OBJECT

public:
  enum InitFlags {
    RedirectStdOut=1, IgnoreSiteModule=2
  };

  //! initialize the python qt binding (flags are a or combination of InitFlags)
  static void init(int flags);

  //! cleanup
  static void cleanup();

  //! get the singleton instance
  static PythonQt* self() { return _self; }

  //-----------------------------------------------------------------------------
  // Public API:

  //! defines the object types for introspection
  enum ObjectType {
    Class,
    Function,
    Variable,
    Module
  };

  //! overwrite the python sys path (call this directly after PythonQt::init() if you want to change the std python sys path)
  void overwriteSysPath(const QStringList& paths);

  //! sets the __path__ list of a module to the given list (important for local imports)
  void setModuleImportPath(PyObject* module, const QStringList& paths);

  //! get the __main__ module of python
  PythonQtObjectPtr getMainModule();

  //! registers a QObject derived class to PythonQt (this is implicitly called by addObject as well)
  /* Since Qt4 does not offer a way to detect if a given classname is derived from QObject and thus has a QMetaObject,
     you MUST register all your QObject derived classes here when you want them to be detected in signal and slot calls */
  void registerClass(const QMetaObject* metaobject);

  //! add the given factory to PythonQt (ownership stays with caller)
  void addWrapperFactory(PythonQtCppWrapperFactory* factory);

  //! parses the given file and returns the python code object, this can then be used to call evalCode()
  PythonQtObjectPtr parseFile(const QString& filename);

  //! evaluates the given code and returns the result value (use Py_Compile etc. to create pycode from string)
  //! If pycode is NULL, a python error is printed.
  QVariant evalCode(PyObject* module, PyObject* pycode);

  //! evaluates the given script code and returns the result value
  QVariant evalScript(PyObject* module, const QString& script, int start = Py_file_input);

  //@{ Variable access

  //! add a signal handler to the given \c signal of \c obj  and connect it to a callable \c objectname in module
  bool addSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname);

  //! remove a signal handler from the given \c signal of \c obj
  bool removeSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname);

  //@}

  //@{ Variable access

  //! add the given \c object to the \c module as a variable with \c name (it can be removed via clearVariable)
  void addObject(PyObject* module, const QString& name, QObject* object);

  //! add the given variable to the module
  void addVariable(PyObject* module, const QString& name, const QVariant& v);

  //! remove the given variable
  void removeVariable(PyObject* module, const QString& name);

  //! get the variable with the \c name of the \c module, returns an invalid QVariant on error
  QVariant getVariable(PyObject* module, const QString& name);

  //! read vars etc. in scope of a module, optional looking inside of an object \c objectname
  QStringList introspection(PyObject* module, const QString& objectname, ObjectType type);

  //! returns the found callable object or NULL
  //! @return new reference
  PythonQtObjectPtr lookupCallable(PyObject* module, const QString& name);

  //@}

  //@{ Calling of python callables

  //! call the given python method, returns the result converted to a QVariant
  QVariant call(PyObject* module, const QString& callable, const QVariantList& args);

  //@}

  //@{ Custom importer (to replace internal import implementation of python)

  //! replace the internal import implementation and use the supplied interface to load files (both py and pyc files)
  //! (this method should be called directly after initialization of init() and before calling overwriteSysPath().
  //! It can only be called once, further calls will be ignored silently. (ownership stays with caller)
  void setImporter(PythonQtImportFileInterface* importInterface);

  //@}

  //! get access to internal data (should not be used on the public API, but is used by some C functions)
  static PythonQtPrivate* priv() { return _self->_p; }

  //! get access to the file importer (if set)
  static PythonQtImportFileInterface* importInterface();

  //! handle a python error, call this when a python function fails. If no error occurred, it returns false.
  //! The error is currently just output to the python stderr, future version might implement better trace printing
  bool handleError();

signals:
  //! emitted when python outputs something to stdout (and redirection is turned on)
  void pythonStdOut(const QString& str);
  //! emitted when python outputs something to stderr (and redirection is turned on)
  void pythonStdErr(const QString& str);

private:
  void initPythonQtModule(bool redirectStdOut);

  //! callback for stdout redirection, emits pythonStdOut signal
  static void stdOutRedirectCB(const QString& str);
  //! callback for stderr redirection, emits pythonStdErr signal
  static void stdErrRedirectCB(const QString& str);

  //! returns the found object or NULL
  //! @return new reference
  PythonQtObjectPtr lookupObject(PyObject* module, const QString& name);

  //! get (and create if not available) the signal receiver of that QObject, signal receiver is made child of the passed \c obj
  PythonQtSignalReceiver* getSignalReceiver(QObject* obj);

  PythonQt(int flags);
  ~PythonQt();

  static PythonQt* _self;

  PythonQtPrivate* _p;

};

//! stores information about a currently created (pending) wrapper object
struct PythonQtPendingObject
{
  QObject*   _obj;
  void*      _wrappedPtr;
  PythonQtClassInfo* _info;
};

//! internal PythonQt details
class PythonQtPrivate : public QObject {

  Q_OBJECT

public:
  PythonQtPrivate();
  ~PythonQtPrivate();

  //! get information on the pending object to be wrapped
  PythonQtPendingObject* pendingObject() { return &_pendingObject; }

  //! remove the wrapper ptr again
  void removeWrapperPointer(void* obj) { _wrappedObjects.take(obj); }

  //! returns the signal info if the signature, uses a signal cache internally to speed up
  //! multiple requests for the same signal
  const PythonQtMethodInfo* getSignalInfo(const QMetaMethod& signal);

  //! wrap the given QObject into a Python object (or return existing wrapper!)
  PyObject* wrapQObject(QObject* obj);

  //! wrap the given ptr into a Python object (or return existing wrapper!) if there is a known QObject of that name or a known wrapper in the factory
  PyObject* wrapPtr(void* ptr, const QByteArray& name);

  //! registers a QObject derived class to PythonQt (this is implicitly called by addObject as well)
  /* Since Qt4 does not offer a way to detect if a given classname is derived from QObject and thus has a QMetaObject,
     you MUST register all your QObject derived classes here when you want them to be detected in signal and slot calls */
  void registerClass(const QMetaObject* metaobject);

protected slots:
  //! called when a wrapped QObject is destroyed
  void wrappedObjectDestroyed(QObject* obj);

  //! called when a signal emitting QObject is destroyed to remove the signal handler from the hash map
  void destroyedSignalEmitter(QObject* obj);

private:
  //! stores pointer to PyObject mapping of wrapped QObjects AND C++ objects
  QHash<void* , PythonQtWrapper *>       _wrappedObjects;

  //! stores the meta info if known Qt classes
  QHash<QByteArray, PythonQtClassInfo *> _knownQtClasses;
  //! stores the meta info if known Qt C++ wrapper classes
  QHash<QByteArray, PythonQtClassInfo *> _knownQtWrapperClasses;

  //! stores the cached signatures of signals to speedup mapping from Qt to Python types
  QHash<QByteArray, PythonQtMethodInfo*> _cachedSignalSignatures;

  //! stores signal receivers for QObjects
  QHash<QObject* , PythonQtSignalReceiver *> _signalReceivers;

  //! stores a pending object to be injected inside of the PythonQtWrapper constructor (because marshalling would be ugly as well)
  PythonQtPendingObject _pendingObject;

  //! the PythonQt python module
  PythonQtObjectPtr _pythonQtModule;

  //! the importer interface (if set)
  PythonQtImportFileInterface* _importInterface;

  //! the cpp object wrapper factories
  QList<PythonQtCppWrapperFactory*> _cppWrapperFactories;

  friend class PythonQt;
};



#endif
