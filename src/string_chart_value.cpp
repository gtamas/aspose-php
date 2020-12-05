#include "../include/aspose.h"
#include "../include/string_chart_value.h"
#include "../include/chart_cell_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Null value assigning is not allowed. Returning value always is not null.. 
     * 
     * @return Php::Value 
     */
    Php::Value StringChartValue::get_AsCells() {
         return Php::Object("ChartCellCollection", wrapObject<IChartCellCollection, AsposePhp::ChartCellCollection, &IStringChartValue::get_AsCells>());
    }



}
