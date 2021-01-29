#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef LINEFORMAT_H
#define LINEFORMAT_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class LineFormat : public AsposeObjectWrapper<ILineFormat>, public Php::Base
    {
        public:
            LineFormat(System::SharedPtr<ILineFormat> obj) : AsposeObjectWrapper<ILineFormat>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_FillFormat();
            

    };

}

#endif
