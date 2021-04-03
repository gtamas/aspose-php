#include "../include/aspose.h"
#include "../include/chart_series.h"
#include "../include/string_chart_value.h"
#include "../include/format.h"
#include "../include/marker.h"
#include "../include/chart_data_point_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Return series StringChartValue object 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series#ab541fe75e2b8c73e5cb312de8e66b4ce
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_Name()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\StringChartValue", wrapObject<IStringChartValue, AsposePhp::StringChartValue, &IChartSeries::get_Name>());
    }

    /**
     * @brief Returns the data point collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series#a2f73845fc482174bf56d3d5ed2bd40b9
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_DataPoints()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataPointCollection", wrapObject<IChartDataPointCollection, AsposePhp::ChartDataPointCollection, &IChartSeries::get_DataPoints>());
        ;
    }

    /**
     * @brief Specifies the bar, column or bubble series shall invert its colors if the value is negative
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series#a7a31ec6174e9f4f113f708d9000ff7de
     * @param params Php::Parameters
     * @param params[0] bool value The value 
     * @return Php::Value 
     */
    void ChartSeries::set_InvertIfNegative(Php::Parameters &params)
    {
        bool value = params[0].boolValue();
        return _asposeObj->set_InvertIfNegative(value);
    }

    /**
     * @brief Represents the formatting properties. Read IFormat
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series#a762b9ff59eac4368c2f6e30865cec274
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_Format()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Format", wrapObject<IFormat, AsposePhp::Format, &IChartSeries::get_Format>());
    }

     /**
     * @brief Gets marker
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series#a8789fbc98830ca2e3ca5c5babbd8ee38
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_Marker()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Marker", wrapObject<IMarker, AsposePhp::Marker, &IChartSeries::get_Marker>());
    }


} // namespace AsposePhp
