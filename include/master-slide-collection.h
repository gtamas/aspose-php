#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef MASTERSLIDECOLLECTION_H
#define MASTERSLIDECOLLECTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class MasterSlideCollection  : public AsposeObjectWrapper<IMasterSlideCollection>, public Collection<IMasterSlideCollection>, public Php::Base
    {
        public:
            MasterSlideCollection(System::SharedPtr<IMasterSlideCollection> col) : AsposeObjectWrapper<IMasterSlideCollection>(col), Collection<IMasterSlideCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            

    };

}

#endif
