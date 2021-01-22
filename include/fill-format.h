#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef FILLFORMAT_H
#define FILLFORMAT_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class FillFormat : public AsposeObjectWrapper<IFillFormat>, public Php::Base
    {
        public:
            FillFormat(System::SharedPtr<IFillFormat> obj) : AsposeObjectWrapper<IFillFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            void set_FillType(Php::Parameters &params); 
            Php::Value get_SolidFillColor();

    };

}

#endif
