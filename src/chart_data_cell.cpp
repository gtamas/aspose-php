#include "../include/aspose.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>
#include <iostream>
#include <typeinfo>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns the UTF8 string value of this data cell. 
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataCell::get_Value() {
        return _asposeObj ? _asposeObj->get_Value()->ToString().ToUtf8String() : "";
    }



}
