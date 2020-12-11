#include "../include/aspose.h"
#include "../include/shape.h"
#include <phpcpp.h>
#include <iostream>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns true if shape is Table, otherwise it returns false.
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isTable()
    {
       
        return isShape<Table>();

    }

    /**
     * @brief Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isChart()
    {
       
        return isShape<Chart>();

    }


    /**
     * @brief Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isGroupShape()
    {
       
        return isShape<GroupShape>();

    }


    /**
     * @brief Returns the alt text of the shape as string
     * 
     * @return Php::Value 
     */
    Php::Value Shape::get_AlternativeText()
    {
        return this->_asposeObj->get_AlternativeText().ToUtf8String();

    }

}
