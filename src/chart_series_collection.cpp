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
     * @https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series_collection#a027b6d8ce297f09c9f0e6e42a676458a
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series_collection#ab4a9e8b11f3488f0357437c0b72999c8
     * 
     * @return Php::Value 
     */
    Php::Value ChartSeriesCollection::get_Count() {
        return Collection::get_Count();
    }


    /**
     * @brief Removes the element at the given index
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_series_collection#a3157e29019bd2cc99b562a1cb99bea04
     * @param params Php::Parameters params
     * @param params[0] index int The index to remove
     * @return Php::Value 
     */
    void ChartSeriesCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->RemoveAt(index);
    }


}
