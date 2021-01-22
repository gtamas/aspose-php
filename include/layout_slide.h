#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef LAYOUT_SLIDE_H
#define LAYOUT_SLIDE_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class LayoutSlide : public AsposeObjectWrapper<ILayoutSlide>, public Php::Base
    {
        public:
            LayoutSlide(System::SharedPtr<ILayoutSlide> slide) : AsposeObjectWrapper<ILayoutSlide>(slide) {};
            void __construct(Php::Parameters &params);
            Php::Value get_MasterSlide();

    };

}

#endif
