#ifndef _PYTHONQTGUI_H
#define _PYTHONQTGUI_H

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
// \file    PythonQtGUI.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-04
*/
//----------------------------------------------------------------------------------

#include "PythonQtGuiSystem.h"
#include "PythonQtMetaObjectWrapper.h"

#include <QObject>

class QWidget;
class QLayout;
class QMainWindow;
class QMenuBar;
class QWidget;
class QAction;
class QMenu;

class PYTHONQTGUI_EXPORT PythonQtGui
{
public:
  //! init the Qt GUI extensions
  static void init();
};

class PythonQtUiLoaderConstructorHandler : public PythonQtConstructorHandler {
public:
  virtual QObject* create(const QMetaObject* meta, PyObject *args, PyObject *kw, QString& error);
};

class PythonQtUiConstructors : public QObject
{
  Q_OBJECT

  public slots:
    QWidget* new_QWidget(QWidget* parent=NULL);

};

class PythonQtUiDecorators : public QObject
{
  Q_OBJECT

public slots:
  void addWidget(QLayout* l, QWidget* w);

  QLayout* layout(QWidget* w);
  void setLayout(QWidget* w, QLayout* l);

  void setCentralWidget(QMainWindow* main, QWidget* w);
  void setMenuBar(QMainWindow* main, QMenuBar* w);

  void addAction(QMenuBar* bar, QAction* action);
  QAction*   addMenu(QMenuBar* bar, QMenu* menu);
  QMenu*   addMenu(QMenuBar* bar, const QString& name);

  QAction* addAction(QMenu* bar, const QString& name);

};

#endif
