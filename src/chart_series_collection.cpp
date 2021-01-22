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
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ChartSeriesCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\Charts\\ChartSeries", wrapObject<IChartSeries, AsposePhp::ChartSeries, &IChartSeriesCollection::idx_get>(index));
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeriesCollection::get_Count() {
        return Collection::get_Count();
    }


    /**
     * @brief Removes the element at the given index
     * 
     * @return Php::Value 
     */
    void ChartSeriesCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->RemoveAt(index);
    }


}
