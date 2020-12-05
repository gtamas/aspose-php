#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/collection.h"
#include "../include/chart_series_collection.h"
#include "../include/chart_series.h"
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
    Php::Value ChartSeriesCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        return Php::Object("ChartSeries", wrapObject<IChartSeries, AsposePhp::ChartSeries, &IChartSeriesCollection::idx_get>(index));
    }

    /**
     * @brief Returns the number of items in collection
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeriesCollection::get_Count() {
        return Collection::get_Count();
    }

}
