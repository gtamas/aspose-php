#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef SLIDE_SIZE_H
#define SLIDE_SIZE_H

namespace AsposePhp {

    class SlideSize : public AsposeObjectWrapper<ISlideSize>, public Php::Base
    {
        public:
            SlideSize(System::SharedPtr<ISlideSize> size) : AsposeObjectWrapper<ISlideSize>(size) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Size();

    };

}

#endif
