#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef ROW_H
#define ROW_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class Row  : public AsposeObjectWrapper<IRow>, public Collection<IRow>, public Php::Base
    {
        public:
            Row(System::SharedPtr<IRow> col) : AsposeObjectWrapper<IRow>(col), Collection<IRow>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            void set_MinimalHeight(Php::Parameters &params);
            

    };

}

#endif
