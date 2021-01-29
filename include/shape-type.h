#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef SHAPE_TYPE_H
#define SHAPE_TYPE_H

using namespace System::Drawing;

namespace AsposePhp {

    class ShapeType : public Php::Base
    {
        private:
            ShapeType() = default;
        public:
            virtual ~ShapeType() {};
            static Php::Value get(Php::Parameters &params);
    

    };

}

#endif
