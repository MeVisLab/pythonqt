/*
*
*  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
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
*  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
*  28359 Bremen, Germany or:
*
*  http://www.mevis.de
*
*/

#include "PythonQt_QtAll.h"

#include "PythonQt.h"

#ifdef PYTHONQT_WITH_GUI
void PythonQt_init_QtGui(PyObject*);
#endif
#ifdef PYTHONQT_WITH_SVG
void PythonQt_init_QtSvg(PyObject*);
#endif
#ifdef PYTHONQT_WITH_SQL
void PythonQt_init_QtSql(PyObject*);
#endif
#ifdef PYTHONQT_WITH_NETWORK
void PythonQt_init_QtNetwork(PyObject*);
#endif
#ifdef PYTHONQT_WITH_CORE
void PythonQt_init_QtCore(PyObject*);
#endif
#ifdef PYTHONQT_WITH_OPENGL
void PythonQt_init_QtOpenGL(PyObject*);
#endif
#ifdef PYTHONQT_WITH_XML
void PythonQt_init_QtXml(PyObject*);
#endif
#ifdef PYTHONQT_WITH_XMLPATTERNS
void PythonQt_init_QtXmlPatterns(PyObject*);
#endif
#ifdef PYTHONQT_WITH_MULTIMEDIA
void PythonQt_init_QtMultimedia(PyObject*);
#endif
#ifdef PYTHONQT_WITH_QML
void PythonQt_init_QtQml(PyObject*);
#endif
#ifdef PYTHONQT_WITH_QUICK
void PythonQt_init_QtQuick(PyObject*);
#endif
#ifdef PYTHONQT_WITH_UITOOLS
void PythonQt_init_QtUiTools(PyObject*);
#endif

#ifdef PYTHONQT_WITH_WEBKIT
void PythonQt_init_QtWebKit(PyObject*);
#endif

namespace PythonQt_QtAll
{
  PYTHONQT_QTALL_EXPORT void init() {
#ifdef PYTHONQT_WITH_CORE
    PythonQt_init_QtCore(0);
#endif
#ifdef PYTHONQT_WITH_NETWORK
    PythonQt_init_QtNetwork(0);
#endif
#ifdef PYTHONQT_WITH_GUI
    PythonQt_init_QtGui(0);
#endif
#ifdef PYTHONQT_WITH_XML
    PythonQt_init_QtXml(0);
#endif
#ifdef PYTHONQT_WITH_SVG
    PythonQt_init_QtSvg(0);
#endif
#ifdef PYTHONQT_WITH_SQL
    PythonQt_init_QtSql(0);
#endif
#ifdef PYTHONQT_WITH_WEBKIT
    PythonQt_init_QtWebKit(0);
#endif
#ifdef PYTHONQT_WITH_OPENGL
    PythonQt_init_QtOpenGL(0);
#endif
#ifdef PYTHONQT_WITH_XMLPATTERNS
    PythonQt_init_QtXmlPatterns(0);
#endif
#ifdef PYTHONQT_WITH_MULTIMEDIA
    PythonQt_init_QtMultimedia(0);
#endif
#ifdef PYTHONQT_WITH_QML
    PythonQt_init_QtQml(0);
#endif
#ifdef PYTHONQT_WITH_QUICK
    PythonQt_init_QtQuick(0);
#endif
#ifdef PYTHONQT_WITH_UITOOLS
    PythonQt_init_QtUiTools(0);
#endif
  };
};


