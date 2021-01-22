#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef FORMAT_H
#define FORMAT_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class Format : public AsposeObjectWrapper<IFormat>, public Php::Base
    {
        public:
            Format(System::SharedPtr<IFormat> obj) : AsposeObjectWrapper<IFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_Fill();
            

    };

}

#endif
