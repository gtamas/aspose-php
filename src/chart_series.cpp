#include "../include/aspose.h"
#include "../include/chart_series.h"
#include "../include/string_chart_value.h"
#include "../include/chart_data_point_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Return series StringChartValue object 
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_Name() {
        return Php::Object("AsposePhp\\Slides\\Charts\\StringChartValue", wrapObject<IStringChartValue, AsposePhp::StringChartValue, &IChartSeries::get_Name>());
    }

    /**
     * @brief Returns the data point collection
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeries::get_DataPoints() {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataPointCollection", wrapObject<IChartDataPointCollection, AsposePhp::ChartDataPointCollection, &IChartSeries::get_DataPoints>());;
    }

}
