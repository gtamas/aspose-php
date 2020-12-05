#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/collection.h"
#include "../include/chart_data_point_collection.h"
#include "../include/chart_data_point.h"
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
    Php::Value ChartDataPointCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        SharedPtr<IChartDataPoint> obj = _asposeObj->idx_get(index);
        ChartDataPoint* phpValue = new ChartDataPoint(obj); 
        return Php::Object("ChartDataPoint", phpValue);

        //return Php::Object("ChartDataPoint", wrapObject<IChartDataPoint, AsposePhp::ChartDataPoint, &IChartDataPointCollection::idx_get>(index));
    }

    /**
     * @brief Returns the number of items in collection.
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPointCollection::get_Count() {
        return Collection::get_Count();
    }

}
