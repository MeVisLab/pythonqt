/****************************************************************************
**
** Copyright (C) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Script Generator project on Qt Labs.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/


#include "compiler_utils.h"
#include "type_compiler.h"
#include "name_compiler.h"
#include "declarator_compiler.h"
#include "ast.h"
#include "binder.h"

TypeInfo CompilerUtils::typeDescription(TypeSpecifierAST *type_specifier, DeclaratorAST *declarator, Binder *binder)
{
  TypeCompiler type_cc (binder);
  DeclaratorCompiler decl_cc (binder);

  type_cc.run (type_specifier);
  decl_cc.run (declarator);

  TypeInfo typeInfo;
  typeInfo.setQualifiedName (type_cc.qualifiedName ());
  typeInfo.setConstant (type_cc.isConstant ());
  typeInfo.setVolatile (type_cc.isVolatile ());
  typeInfo.setReference (decl_cc.isReference ());
  typeInfo.setRvalueReference (decl_cc.isRvalueReference ());
  typeInfo.setIndirections (decl_cc.indirection ());
  typeInfo.setArrayElements (decl_cc.arrayElements ());

  return typeInfo;
}

// kate: space-indent on; indent-width 2; replace-tabs on;
