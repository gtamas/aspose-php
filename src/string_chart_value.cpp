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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.string_chart_value#ad40782ba99e60eb91d1b99baaf67d094
     * @return Php::Value 
     */
    Php::Value StringChartValue::get_AsCells() {
         return Php::Object("AsposePhp\\Slides\\Charts\\ChartCellCollection", wrapObject<IChartCellCollection, AsposePhp::ChartCellCollection, &IStringChartValue::get_AsCells>());
    }



}
