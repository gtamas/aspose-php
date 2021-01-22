#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef COLORFORMAT_H
#define COLORFORMAT_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class ColorFormat : public AsposeObjectWrapper<IColorFormat>, public Php::Base
    {
        public:
            ColorFormat(System::SharedPtr<IColorFormat> obj) : AsposeObjectWrapper<IColorFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value set_Color(Php::Parameters &params);
            

    };

}

#endif
