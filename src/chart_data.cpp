#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/chart_series_collection.h"
#include "../include/chart_category_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the series collection from chart data. 
     * 
     * @return Php::Value 
     */
    Php::Value ChartData::get_Series() {
        return Php::Object("ChartSeriesCollection", wrapObject<IChartSeriesCollection, AsposePhp::ChartSeriesCollection, &IChartData::get_Series>());
    }

    /**
     * @brief Returns categories collection.
     * 
     * @return Php::Value 
     */
    Php::Value ChartData::get_Categories() {
        return Php::Object("ChartCategoryCollection", wrapObject<IChartCategoryCollection, AsposePhp::ChartCategoryCollection, &IChartData::get_Categories>());
    }


}
