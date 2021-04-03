#include "../include/aspose.h"
#include "../include/chart_data_point.h"
#include "../include/data_label.h"
#include "../include/double_chart_value.h"
#include "../include/string_or_double_chart_value.h"
#include "../include/marker.h"
#include "../include/format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Represents the label of chart data point
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#a56f9332fdc17c728d9688e39fd8f7250
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Label()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\DataLabel", wrapObject<IDataLabel, AsposePhp::DataLabel, &IChartDataPoint::get_Label>());
    }

    /**
     * @brief Returns the value of chart data point
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#a4cce55754d5b0c4b5f4f07a6b9cb0f37
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Value()
    {
        return  Php::Object("AsposePhp\\Slides\\Charts\\DoubleChartValue", wrapObject<IDoubleChartValue, AsposePhp::DoubleChartValue, &IChartDataPoint::get_Value>());   
    }

    /**
     * @brief Returns the y value of chart data point
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#a400161d6b5b455d1217025a04468ab2f
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_YValue()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\DoubleChartValue", wrapObject<IDoubleChartValue, AsposePhp::DoubleChartValue, &IChartDataPoint::get_YValue>());
        ;
    }

    /**
     * @brief Returns the x value of chart data point
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#a8e962e5c05880ee808a545ffe4e3cf23
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_XValue()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\StringOrDoubleChartValue", wrapObject<IStringOrDoubleChartValue, AsposePhp::StringOrDoubleChartValue, &IChartDataPoint::get_XValue>());
        ;
    }

    /**
     * @brief Specifies a data marker
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#ad1dccaa99f76efa62384cc2fbb36630e
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Marker()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Marker", wrapObject<IMarker, AsposePhp::Marker, &IChartDataPoint::get_Marker>());
    }


    /**
     * @brief Represents the formatting properties. Read IFormat
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#ab220b167cbe6087e9db85b32906b5b87
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Format()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Format", wrapObject<IFormat, AsposePhp::Format, &IChartDataPoint::get_Format>());
    }

    /**
     * @brief Removes DataPoint from chart series
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point#a05cbec74e44d5e52c16890d37d42165e
     * 
     */
    void ChartDataPoint::Remove()
    {
        _asposeObj->Remove();
    }

} // namespace AsposePhp
