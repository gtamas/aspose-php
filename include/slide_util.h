#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef SLIDE_UTIL_H
#define SLIDE_UTIL_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class SlideUtil : public Php::Base
    {
        private:
            void __construct();
        public: 
            static Php::Value GetAllTextBoxes(Php::Parameters &params);

    };

}

#endif
