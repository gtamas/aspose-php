#include "../include/aspose.h"
#include "../include/string_or_double_chart_value.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns chart data cell
     * 
     * @return Php::Value 
     */
    Php::Value StringOrDoubleChartValue::get_AsCell() {
        return Php::Object("ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IStringOrDoubleChartValue::get_AsCell>());
    }

}
