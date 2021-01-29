#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef FILLTYPE_H
#define FILLTYPE_H

using namespace System::Drawing;

namespace AsposePhp {

    class FillType : public Php::Base
    {
        private:
            FillType() = default;
        public:
            virtual ~FillType() {};
            static Php::Value get(Php::Parameters &params);
    

    };

}

#endif
