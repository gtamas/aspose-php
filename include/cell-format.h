#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CELLFORMAT_H
#define CELLFORMAT_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class CellFormat : public AsposeObjectWrapper<ICellFormat>, public Php::Base
    {
        public:
            CellFormat(System::SharedPtr<ICellFormat> obj) : AsposeObjectWrapper<ICellFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_FillFormat();
            

    };

}

#endif
