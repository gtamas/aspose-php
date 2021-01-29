#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef LINEFILLFORMAT_H
#define LINEFILLFORMAT_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class LineFillFormat : public AsposeObjectWrapper<ILineFillFormat>, public Php::Base
    {
        public:
            LineFillFormat(System::SharedPtr<ILineFillFormat> obj) : AsposeObjectWrapper<ILineFillFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            void set_FillType(Php::Parameters &params);
            Php::Value get_SolidFillColor();
            

    };

}

#endif
