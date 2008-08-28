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
// \file    PythonQtGui.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-04
*/
//----------------------------------------------------------------------------------

#include "PythonQtGui.h"
#include "PythonQt.h"
#include <QUiLoader>
#include <QLayout>
#include <QAction>
#include <QActionGroup>

#include <QtGui/QtGui>

void PythonQtGui::init()
{
  PythonQt::self()->addConstructorHandler(new PythonQtUiLoaderConstructorHandler);
  PythonQt::self()->addInstanceDecorators(new PythonQtUiDecorators());
  PythonQt::self()->addClassDecorators(new PythonQtUiConstructors());

  PythonQt::self()->registerClass(&QAction::staticMetaObject);
  PythonQt::self()->registerClass(&QActionGroup::staticMetaObject);

  PythonQt::self()->registerClass(&QCheckBox::staticMetaObject);
  PythonQt::self()->registerClass(&QComboBox::staticMetaObject);
  PythonQt::self()->registerClass(&QDateTimeEdit::staticMetaObject);
  PythonQt::self()->registerClass(&QDateEdit::staticMetaObject);
  PythonQt::self()->registerClass(&QTimeEdit::staticMetaObject);
  PythonQt::self()->registerClass(&QDial::staticMetaObject);
  PythonQt::self()->registerClass(&QDialog::staticMetaObject);
  PythonQt::self()->registerClass(&QDockWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QFrame::staticMetaObject);
  PythonQt::self()->registerClass(&QGroupBox::staticMetaObject);
  PythonQt::self()->registerClass(&QLCDNumber::staticMetaObject);
  PythonQt::self()->registerClass(&QLabel::staticMetaObject);
  PythonQt::self()->registerClass(&QLineEdit::staticMetaObject);
  PythonQt::self()->registerClass(&QListView::staticMetaObject);
  PythonQt::self()->registerClass(&QListWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QMainWindow::staticMetaObject);
  PythonQt::self()->registerClass(&QMenu::staticMetaObject);
  PythonQt::self()->registerClass(&QMenuBar::staticMetaObject);
  PythonQt::self()->registerClass(&QProgressBar::staticMetaObject);
  PythonQt::self()->registerClass(&QPushButton::staticMetaObject);
  PythonQt::self()->registerClass(&QRadioButton::staticMetaObject);
  PythonQt::self()->registerClass(&QScrollBar::staticMetaObject);
  PythonQt::self()->registerClass(&QSlider::staticMetaObject);
  PythonQt::self()->registerClass(&QSpinBox::staticMetaObject);
  PythonQt::self()->registerClass(&QDoubleSpinBox::staticMetaObject);
  PythonQt::self()->registerClass(&QTabWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QTableView::staticMetaObject);
  PythonQt::self()->registerClass(&QTableWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QTextBrowser::staticMetaObject);
  PythonQt::self()->registerClass(&QTextEdit::staticMetaObject);
  PythonQt::self()->registerClass(&QToolBar::staticMetaObject);
  PythonQt::self()->registerClass(&QToolBox::staticMetaObject);
  PythonQt::self()->registerClass(&QToolButton::staticMetaObject);
  PythonQt::self()->registerClass(&QTreeView::staticMetaObject);
  PythonQt::self()->registerClass(&QTreeWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QWorkspace::staticMetaObject);
  PythonQt::self()->registerClass(&QSplitter::staticMetaObject);
  PythonQt::self()->registerClass(&QStackedWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QStatusBar::staticMetaObject);
  PythonQt::self()->registerClass(&QDialogButtonBox::staticMetaObject);
  PythonQt::self()->registerClass(&QFontComboBox::staticMetaObject);
  PythonQt::self()->registerClass(&QCalendarWidget::staticMetaObject);
  PythonQt::self()->registerClass(&QHBoxLayout::staticMetaObject);
  PythonQt::self()->registerClass(&QStackedLayout::staticMetaObject);
  PythonQt::self()->registerClass(&QVBoxLayout::staticMetaObject);
}

bool PythonQt_inherits(const QMetaObject* self, const QMetaObject* parent) {
  const QMetaObject* m = self;
  while (m) {
    if (m==parent) {
      return true;
    };
    m = m->superClass();
  }
  return false;
}

QObject* PythonQtUiLoaderConstructorHandler::create(const QMetaObject* meta, PyObject *args, PyObject *kw, QString& error)
{
  if (!PythonQt_inherits(meta, &QLayout::staticMetaObject) && 
      !PythonQt_inherits(meta, &QWidget::staticMetaObject) &&
      !PythonQt_inherits(meta, &QAction::staticMetaObject) &&
      !PythonQt_inherits(meta, &QActionGroup::staticMetaObject)) return NULL;
  
  static QUiLoader* loader = NULL;
  if (!loader) {
    loader = new QUiLoader();
  }
  int argc = PyTuple_Size(args);
  QObject* parent = NULL;
  if (argc == 1) {
    PyObject* arg1 = PyTuple_GET_ITEM(args, 0);
    if (arg1 && arg1->ob_type == &PythonQtWrapper_Type) {
      parent = ((PythonQtWrapper*)arg1)->_obj;
    } else {
      error = QString("constructor ") + meta->className() + " requires a QObject as parent";
      return NULL;
    }
  } else if (argc!=0) {
    error = QString("constructor ") + meta->className() + " called with too many arguments";
    return NULL;
  }
  
  if (PythonQt_inherits(meta, &QLayout::staticMetaObject)) {
    return loader->createLayout(meta->className(), parent);
  }
  if (PythonQt_inherits(meta, &QWidget::staticMetaObject)) {
    if (!parent || parent->isWidgetType()) {
      return loader->createWidget(meta->className(), (QWidget*)parent);
    } else {
      error = QString("constructor ") + meta->className() + " requires a QWidget as parent";
      return NULL;
    }
  }
  if (PythonQt_inherits(meta, &QAction::staticMetaObject)) {
    return loader->createAction(parent);
  }
  if (PythonQt_inherits(meta, &QActionGroup::staticMetaObject)) {
    return loader->createActionGroup(parent);
  }
  return NULL;
}


void PythonQtUiDecorators::addWidget(QLayout* l, QWidget* w)
{
  l->addWidget(w);
}

QLayout* PythonQtUiDecorators::layout(QWidget* w)
{
  return w->layout();
}

void PythonQtUiDecorators::setLayout(QWidget* w, QLayout* l)
{
  w->setLayout(l);
}

void PythonQtUiDecorators::setCentralWidget(QMainWindow* main, QWidget* w)
{
  main->setCentralWidget(w);
}

void PythonQtUiDecorators::setMenuBar(QMainWindow* main, QMenuBar* w)
{
  main->setMenuBar(w);
}

void PythonQtUiDecorators::addAction(QMenuBar* bar, QAction* action)
{
  bar->addAction(action);
}

QAction* PythonQtUiDecorators::addMenu(QMenuBar* bar, QMenu* menu)
{
  return bar->addMenu(menu);
}
 
QMenu* PythonQtUiDecorators::addMenu(QMenuBar* bar, const QString& name)
{
  return bar->addMenu(name);
}

QAction* PythonQtUiDecorators::addAction(QMenu* m, const QString& name)
{
  return m->addAction(name);
}

// --------------------------------------------------------------------

QWidget* PythonQtUiConstructors::new_QWidget(QWidget* parent)
{
  return new QWidget(parent);
}
