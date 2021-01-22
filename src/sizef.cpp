#include "../include/aspose.h"
#include "../include/sizef.h"
#include <phpcpp.h>

using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the value of width represented by the current object.  
     * 
     * @return Php::Value 
     */
    Php::Value SizeF::get_Width() {
        return _asposeObj.get_Width();
    }

    /**
     * @brief Returns the value of height represented by the current object.
     * 
     * @return Php::Value 
     */
    Php::Value SizeF::get_Height() {
        return _asposeObj.get_Height();
    }

}
