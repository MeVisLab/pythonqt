#ifndef _PYTHONQTDOC_H
#define _PYTHONQTDOC_H

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
// \file    PythonQtDoc.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-10
*/
//----------------------------------------------------------------------------------

/*!
\mainpage

 \section Introduction

 \b PythonQt is a dynamic Python (http://www.python.org) binding for Qt (http://www.trolltech.com).
 It offers an easy way to embedd the Python scripting language into
 your Qt applications. It makes heavy use of the QMetaObject system and thus requires Qt4.x.

 In contrast to <a href="http://www.riverbankcomputing.co.uk/pyqt/">PyQt</a> , PythonQt is \b not a complete
 Python wrapper around the complete Qt functionality. So if you are looking for a way to
 write complete applications in Python using the Qt GUI, you should use PyQt.

 If you are looking for a simple way to embed the Python language into your Qt Application
 and to script parts of your application via Python, PythonQt is the way to go!

 \section Licensing

 PythonQt is distributed under the LGPL license.

 \section Download

 PythonQt is hosted on SourceForge at http://sourceforge.net/projects/pythonqt , you can access it via SVN
 or download a tarball.

 \section Features

 - Access all \b slots, \b properties and children of any QObject derived class from Python
 - Connecting Qt Signals to Python functions
 - Wrapping of C++ objects (which are not derived from QObject) via PythonQtCPPWrapperFactory
 - StdOut/Err redirection to Qt signals instead of cout
 - Interface for creating your own \c import replacement, so that Python scripts can be e.g. signed/verified before they are executed (PythonQtImportInterface)
 - Mapping of plain-old-datatypes and many QVariant types to and from Python
 - No preprocessing/wrapping tool needs to be started, PythonQt can script any QObject without prior knowledge about it (except for the MetaObject information from the \b moc)

 \section Non-Features

 Features that PythonQt does NOT support (and will not support):

 - you can not access normal member functions of QObjects, only slots and properties, because the \b moc does not store normal member functions in the MetaObject system
 - you can only script QObject derived classes, for normal C++ classes you need to create a PythonQtCPPWrapperFactory and adequate wrapper classes
 - you can not derive from QObjects inside of Python, this would require wrapper generation like PyQt does

 \section Interface

 The main interface to PythonQt is the PythonQt singleton.
 PythonQt needs to be initialized via PythonQt::init() once.
 Afterwards you communicate with the singleton via PythonQt::self().

 \section Datatype Datatype Mapping

  The following table shows the mapping between Python and Qt objects:
  <table>
  <tr><th>Qt/C++</th><th>Python</th></tr>
  <tr><td>bool</td><td>bool</td></tr>
  <tr><td>double</td><td>float</td></tr>
  <tr><td>float</td><td>float</td></tr>
  <tr><td>char/uchar,int/uint,short,ushort,QChar</td><td>integer</td></tr>
  <tr><td>long</td><td>integer</td></tr>
  <tr><td>ulong,longlong,ulonglong</td><td>long</td></tr>
  <tr><td>QString</td><td>unicode string</td></tr>
  <tr><td>char*</td><td>str</td></tr>
  <tr><td>QStringList</td><td>tuple of unicode strings</td></tr>
  <tr><td>QSize</td><td>QSize wrapper</td></tr>
  <tr><td>QRect</td><td>QRect wrapper</td></tr>
  <tr><td>QPoint</td><td>QPoint wrapper</td></tr>
  <tr><td>QImage</td><td>QImage wrapper</td></tr>
  <tr><td>QPixmap</td><td>QPixmap wrapper</td></tr>
  <tr><td>QVariant</td><td>depends on type, see below</td></tr>
  <tr><td>QVariantList</td><td>tuple of objects</td></tr>
  <tr><td>QVariantMap</td><td>dict of objects</td></tr>
  <tr><td>QDate</td><td>string</td></tr>
  <tr><td>QTime</td><td>string</td></tr>
  <tr><td>QDateTime</td><td>string</td></tr>
  <tr><td>QObject (and derived classes)</td><td>QObject wrapper</td></tr>
  <tr><td>PyObject</td><td>PyObject</td></tr>
  </table>

  PyObject is passed as simple pointer, which allows to pass/return any Python Object directly to/from
  a Qt slot.
  QVariants are mapped recursively as given above, e.g. a dictionary can
  contain lists of dictionaries of doubles.
  For example a QVariant of type "String" is mapped to a python unicode string.
  Not all Qt QVariant types are implemented, the support for all QVariant types
  is on the TODO list.

 \section QObject QObject Wrapping

 All classes derived from QObject are automatically wrapped with a python wrapper class
 when they become visible to the Python interpreter. This can happen via
 - the PythonQt::addObject() method
 - when a Qt \b slot returns a QObject derived object to python
 - when a Qt \b signal contains a QObject and is connected to a python function

 It is important that you call PythonQt::registerClass() for any QObject derived class
 that may become visible to Python, except when you add it via PythonQt::addObject().
 This will register the complete parent hierachy of the registered class, so that
 when you register e.g. a QPushButton, QWidget will be registered as well (and all intermediate
 parents).

 From Python, you can talk to the returned QObjects in a natural way by calling
 their slots and receiving the return values. You can also read/write all
 properties of the objects as if they where normal python properties.

 In addition to this, the wrapped objects support
 - className() - returns a string that reprents the classname of the QObject
 - help() - shows all properties and slots of the object
 - connect(signal, function) - connect the signal of the given object to a python function
 - connect(signal, qobject, slot) - connect the signal of the given object to a slot of another QObject
 - disconnect(signal, function) - disconnect the signal of the given object from a python function
 - disconnect(signal, qobject, slot) - disconnect the signal of the given object from a slot of another QObject

 The below example shows how to connect signals in Python:

 \code
 # define a signal handler function
 def someFunction(flag):
   print flag

 # button1 is a QPushButton that has been added to Python via addObject()
 # connect the clicked signal to a python function:
 button1.connect("clicked(bool)", someFunction)

 \endcode


 \section Building

 PythonQt has been tested with Qt 4.1 and 4.2 and Python 2.3, 2.4 and 2.5 on Windows, Linux and MacOS X.
 To complile PythonQt, you will need a python developer installation which includes Python's header files and
 the python2x.[lib | dll | so | dynlib].

 For building PythonQt, you will need to set some environment variables:
 \b PYTHON_ROOT should point to the Python sources/headers.
 \b PYTHON_LIB should point to where the Python library files are located.
 \b PYTHONQT_ROOT should point to the root directory of PythonQt.

 Run qmake on PythonQt.pro to generate a project file for your system and then build it.

 \section Tests

 There is a unit test that tests most features of PythonQt, see the \b tests subdirectory for details.

 \section Examples

 Examples are available in the \b examples directory. The PyScriptingConsole implements a simple
 interactive scripting console that shows how to script a simple application.

 The following shows how to integrate PythonQt into you Qt application:

 \code
 #include "PythonQt.h"
 #include <QApplication>
 ...

 int main( int argc, char **argv )
 {

  QApplication qapp(argc, argv);

  // init PythonQt and Python itself
  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);

  // get a smart pointer to the __main__ module of the Python interpreter
  PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();

  // add a QObject as variable of name "example" to the namespace of the __main__ module
  PyExampleObject example;
  PythonQt::self()->addObject(mainContext, "example", &example);

  // register all other QObjects that you want to script and that are returned by your API
  PythonQt::self()->registerClass(&QMainWindow::staticMetaObject);
  PythonQt::self()->registerClass(&QPushButton::staticMetaObject);
  ...

  // do something
  PythonQt::self()->runScript(mainContext, "print example\n");
  PythonQt::self()->runScript(mainContext, "def multiply(a,b):\n  return a*b;\n");
  QVariantList args;
  args << 42 << 47;
  QVariant result = PythonQt::self()->call(mainContext,"multiply", args);
  ...
 \endcode


  \section TODOs

  - add verbose/diagnosis mode
  - add missing Qt variant types
  - improve qmake profiles for non mevis users
  - add more information on how to distribute an application that uses PythonQt, including the Python distribution

*/
