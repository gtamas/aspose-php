#include "../include/aspose.h"
#include "../include/chart_data_point.h"
#include "../include/data_label.h"
#include "../include/double_chart_value.h"
#include "../include/string_or_double_chart_value.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Represents the label of chart data point
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Label() {
        return Php::Object("DataLabel", wrapObject<IDataLabel, AsposePhp::DataLabel, &IChartDataPoint::get_Label>());
    }

    /**
     * @brief Returns the value of chart data point
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Value() {
        return Php::Object("DoubleChartValue", wrapObject<IDoubleChartValue, AsposePhp::DoubleChartValue, &IChartDataPoint::get_Value>());;
    }

    /**
     * @brief Returns the x value of chart data point
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_YValue() {
        return Php::Object("DoubleChartValue", wrapObject<IDoubleChartValue, AsposePhp::DoubleChartValue, &IChartDataPoint::get_YValue>());;
    }

    /**
     * @brief Returns the y value of chart data point
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_XValue() {
        return Php::Object("StringOrDoubleChartValue", wrapObject<IStringOrDoubleChartValue, AsposePhp::StringOrDoubleChartValue, &IChartDataPoint::get_XValue>());;
    }

}
