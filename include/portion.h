#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef PORTION_H
#define PORTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class Portion : public AsposeObjectWrapper<IPortion>, public Php::Base
    {
        public:
            Portion(System::SharedPtr<IPortion> obj) : AsposeObjectWrapper<IPortion>(obj) {};
            void __construct(Php::Parameters &params);
            void set_Text(Php::Parameters &params);
            Php::Value get_Text();
    };

}

#endif
