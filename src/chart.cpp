#include "../include/aspose.h"
#include "../include/chart.h"
#include "../include/chart_data.h"
#include "../include/shape_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns information about the linked or embedded data associated with a chart. 
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_ChartData() {
        return Php::Object("ChartData", wrapObject<IChartData, AsposePhp::ChartData, &IChart::get_ChartData>());
    }

    /**
     * @brief Returns the alternative text associated with a chart. UTF8 string.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_AlternativeText() {
        return _asposeObj->get_AlternativeText().ToUtf8String();
    }



}
