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
// \file    PythonQtTests.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PyScriptingConsole.h"
#include "PyExampleObject.h"
#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>

int main( int argc, char **argv )
{
  QApplication qapp(argc, argv);

  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);

  // if you want to provide your own Python distribution, you can use overwriteSysPath to
  // set those paths
  //QStringList paths;
  //paths << "F:\\mevisQt4\\Libraries\\misc\\PythonQt\\bin\\Lib";
  //PythonQt::self()->overwriteSysPath(paths);

  PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();

  // add a QObject to the namespace of the main python context
  PyExampleObject example;
  PythonQt::self()->addObject(mainContext, "example", &example);

  // register all other QObjects that you want to script and that are returned by your API
  //PythonQt::self()->registerClass(&QMainWindow::staticMetaObject);
  PythonQt::self()->registerClass(&QPushButton::staticMetaObject);

  PyScriptingConsole console(NULL, mainContext);
  console.show();
  return qapp.exec();
}

