#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef COLUMNCOLLECTION_H
#define COLUMNCOLLECTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class ColumnCollection  : public AsposeObjectWrapper<IColumnCollection>, public Collection<IColumnCollection>, public Php::Base
    {
        public:
            ColumnCollection(System::SharedPtr<IColumnCollection> col) : AsposeObjectWrapper<IColumnCollection>(col), Collection<IColumnCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            void RemoveAt(Php::Parameters &params);
            

    };

}

#endif
