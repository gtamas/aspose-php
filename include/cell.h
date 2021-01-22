#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CELL_H
#define CELL_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class Cell : public AsposeObjectWrapper<ICell>, public Php::Base
    {
        public:
            Cell(System::SharedPtr<ICell> obj) : AsposeObjectWrapper<ICell>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_TextFrame();
            Php::Value get_CellFormat();
            Php::Value get_RowSpan();
            Php::Value get_ColSpan();
            void SplitByRowSpan(Php::Parameters &params);
            void SplitByColSpan(Php::Parameters &params);
            Php::Value get_IsMergedCell();

    };

}

#endif
