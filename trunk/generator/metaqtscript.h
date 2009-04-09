/****************************************************************************
**
** Copyright (C) 1992-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the Qt Script Generator project on Trolltech Labs.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.trolltech.com/products/qt/opensource.html
**
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://www.trolltech.com/products/qt/licensing.html or contact the
** sales department at sales@trolltech.com.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#ifndef METAQTSCRIPT_H
#define METAQTSCRIPT_H

#include "abstractmetalang.h"

class MetaQtScriptClass;
class MetaQtScriptField;
class MetaQtScriptFunction;
class MetaQtScriptType;
class MetaQtScriptVariable;
class MetaQtScriptArgument;
class MetaQtScriptEnumValue;
class MetaQtScriptEnum;



class MetaQtScriptType : public AbstractMetaType
{};

class MetaQtScriptArgument : public AbstractMetaArgument
{};

class MetaQtScriptField : public AbstractMetaField
{};

class MetaQtScriptFunction : public AbstractMetaFunction
{};

class MetaQtScriptEnumValue : public AbstractMetaEnumValue
{};

class MetaQtScriptEnum : public AbstractMetaEnum
{};

class MetaQtScriptClass : public AbstractMetaClass
{
    virtual bool hasDefaultToStringFunction() const;
};

#endif // METAQTSCRIPT_H
