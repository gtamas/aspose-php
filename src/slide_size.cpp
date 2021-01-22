#include "../include/aspose.h"
#include "../include/slide_size.h"
#include "../include/sizef.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System::Drawing;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the size in points.  
     * 
     * @return Php::Value 
     */
    Php::Value SlideSize::get_Size() {
         System::Drawing::SizeF obj = _asposeObj->get_Size();
         AsposePhp::SizeF * phpValue = new AsposePhp::SizeF(obj); 
         return Php::Object("AsposePhp\\Slides\\SizeF", phpValue);
    }

}
