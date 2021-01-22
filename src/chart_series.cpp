#include "../include/aspose.h"
#include "../include/chart_series.h"
#include "../include/string_chart_value.h"
#include "../include/chart_data_point_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Return series StringChartValue object 
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_Name()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\StringChartValue", wrapObject<IStringChartValue, AsposePhp::StringChartValue, &IChartSeries::get_Name>());
    }

    /**
     * @brief Returns the data point collection
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
     * 
     * @param params 
     * @return Php::Value 
     */
    void ChartSeries::set_InvertIfNegative(Php::Parameters &params)
    {
        bool value = params[0].boolValue();
        return _asposeObj->set_InvertIfNegative(value);
    }

} // namespace AsposePhp
