#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef PORTIONFORMAT_H
#define PORTIONFORMAT_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class PortionFormat : public AsposeObjectWrapper<IPortionFormat>, public Php::Base
    {
        public:
            PortionFormat(System::SharedPtr<IPortionFormat> obj) : AsposeObjectWrapper<IPortionFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_FillFormat();
            

    };

}

#endif
