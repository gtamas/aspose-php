#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/chart_data_cell.h"
#include "../include/chart_cell_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the series collection from chart data. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_cell_collection#ae20f90f0e08fb82a59dd400e703f4a06
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ChartCellCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IChartCellCollection::idx_get>(index));
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_cell_collection#acda274a88c33b4f1d32881b2d816e31c
     * 
     * @return Php::Value 
     */
    Php::Value ChartCellCollection::get_Count() {
        return _asposeObj->get_Count();
    }

}
