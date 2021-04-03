#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CELLFORMAT_H
#define CELLFORMAT_H

using namespace Aspose::Slides;

namespace AsposePhp {

    /**
     * @brief Represents format of a table cell
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell_format
     * 
     */
    class CellFormat : public AsposeObjectWrapper<ICellFormat>, public Php::Base
    {
        public:
            CellFormat(System::SharedPtr<ICellFormat> obj) : AsposeObjectWrapper<ICellFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_FillFormat();
            

    };

}

#endif
