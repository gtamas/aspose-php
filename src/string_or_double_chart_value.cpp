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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.string_or_double_chart_value#aceab1aeabc14658eb7d78ea99ae25d60
     * @return Php::Value 
     */
    Php::Value StringOrDoubleChartValue::get_AsCell() {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IStringOrDoubleChartValue::get_AsCell>());
    }

}
