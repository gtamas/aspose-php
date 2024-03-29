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
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Label()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\DataLabel", wrapObject<IDataLabel, AsposePhp::DataLabel, &IChartDataPoint::get_Label>());
    }

    /**
     * @brief Returns the value of chart data point
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Value()
    {
        return  Php::Object("AsposePhp\\Slides\\Charts\\DoubleChartValue", wrapObject<IDoubleChartValue, AsposePhp::DoubleChartValue, &IChartDataPoint::get_Value>());   
    }

    /**
     * @brief Returns the y value of chart data point
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
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Marker()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Marker", wrapObject<IMarker, AsposePhp::Marker, &IChartDataPoint::get_Marker>());
    }


    /**
     * @brief Represents the formatting properties. Read IFormat
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPoint::get_Format()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Format", wrapObject<IFormat, AsposePhp::Format, &IChartDataPoint::get_Format>());
    }

    /**
     * @brief Removes DataPoint from chart series
     * 
     */
    void ChartDataPoint::Remove()
    {
        _asposeObj->Remove();
    }

} // namespace AsposePhp
