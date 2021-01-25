#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef COLUMN_H
#define COLUMN_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class Column : public AsposeObjectWrapper<IColumn>, public Php::Base
    {
        public:
            Column(System::SharedPtr<IColumn> obj) : AsposeObjectWrapper<IColumn>(obj) {};
            void __construct(Php::Parameters &params);
            void set_Width(Php::Parameters &params);       

    };

}

#endif
