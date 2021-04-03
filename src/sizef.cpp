#include "../include/aspose.h"
#include "../include/sizef.h"
#include <phpcpp.h>

using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the value of width represented by the current object.  
     * @see https://apireference.aspose.com/slides/cpp/class/system.drawing.size_f#a4d8110bfe29a831549af060b35bc7b19
     * @return Php::Value 
     */
    Php::Value SizeF::get_Width() {
        return _asposeObj.get_Width();
    }

    /**
     * @brief Returns the value of height represented by the current object.
     * @see https://apireference.aspose.com/slides/cpp/class/system.drawing.size_f#a2e2a45abd2e40d5c11b76cfe52bc2489
     * @return Php::Value 
     */
    Php::Value SizeF::get_Height() {
        return _asposeObj.get_Height();
    }

}
