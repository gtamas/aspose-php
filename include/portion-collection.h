#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef PORTIONCOLLECTION_H
#define PORTIONCOLLECTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class PortionCollection  : public AsposeObjectWrapper<IPortionCollection>, public Collection<IPortionCollection>, public Php::Base
    {
        public:
            PortionCollection(System::SharedPtr<IPortionCollection> col) : AsposeObjectWrapper<IPortionCollection>(col), Collection<IPortionCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            

    };

}

#endif
