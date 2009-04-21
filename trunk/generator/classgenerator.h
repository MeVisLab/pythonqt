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

#ifndef CLASS_GENERATOR
#define CLASS_GENERATOR

#include "generator.h"
#include "metaqtscript.h"
#include "prigenerator.h"
#include "setupgenerator.h"

class ClassGenerator : public Generator
{
    Q_OBJECT

 public:
    ClassGenerator(PriGenerator *pri, SetupGenerator *setup);

    virtual QString fileNameForClass(const AbstractMetaClass *meta_class) const;
    virtual QString subDirectoryForClass(const AbstractMetaClass *cls) const
    {
        return "generated_cpp/" + cls->package().replace(".", "_") + "/";
    }
    virtual bool shouldGenerate(const AbstractMetaClass *meta_class) const;
    void write(QTextStream &s, const AbstractMetaClass *meta_class);

  static void writeInclude(QTextStream &stream, const Include &inc);

  static bool isSpecialStreamingOperator(const AbstractMetaFunction *fun);

 private:
    PriGenerator *priGenerator;
    SetupGenerator *setupGenerator;
    QStringList describeFunctons;
};

#endif // CLASS_GENERATOR
