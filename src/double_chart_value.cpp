#include "../include/aspose.h"
#include "../include/double_chart_value.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns chart data cell. 
     * 
     * @return Php::Value 
     */
    Php::Value DoubleChartValue::get_AsCell() {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IDoubleChartValue::get_AsCell>());
    }

}
