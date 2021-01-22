#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef MASTER_SLIDE_H
#define MASTER_SLIDE_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class MasterSlide : public AsposeObjectWrapper<IMasterSlide>, public Php::Base
    {
        public:
            MasterSlide(System::SharedPtr<IMasterSlide> slide) : AsposeObjectWrapper<IMasterSlide>(slide) {};
            void __construct(Php::Parameters &params);

    };

}

#endif
