#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef ROWCOLLECTION_H
#define ROWCOLLECTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class RowCollection  : public AsposeObjectWrapper<IRowCollection>, public Collection<IRowCollection>, public Php::Base
    {
        public:
            RowCollection(System::SharedPtr<IRowCollection> col) : AsposeObjectWrapper<IRowCollection>(col), Collection<IRowCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            void RemoveAt(Php::Parameters &params);

    };

}

#endif
