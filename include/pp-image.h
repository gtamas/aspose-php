#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef PPIMAGE_H
#define PPIMAGE_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class PPImage : public AsposeObjectWrapper<IPPImage>, public Php::Base
    {
        public:
            PPImage(System::SharedPtr<IPPImage> obj) : AsposeObjectWrapper<IPPImage>(obj) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Width();
            Php::Value get_Height();
            Php::Value get_ContentType();

    };

}

#endif
