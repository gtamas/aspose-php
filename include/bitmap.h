#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef BITMAP_H
#define BITMAP_H

using namespace System::Drawing;

namespace AsposePhp {

    class Bitmap : public AsposeObjectWrapper<System::Drawing::Bitmap>, public Php::Base
    {
        public:
            Bitmap(System::SharedPtr<System::Drawing::Bitmap> bmp) : AsposeObjectWrapper<System::Drawing::Bitmap>(bmp) {};
            void __construct(Php::Parameters &params);

    };

}

#endif
