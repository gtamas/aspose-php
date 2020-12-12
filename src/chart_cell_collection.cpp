#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/chart_data_cell.h"
#include "../include/chart_cell_collection.h"
//#include "../include/chart_category.h"
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
     * 
     * @return Php::Value 
     */
    Php::Value ChartCellCollection::get_Count() {
        return _asposeObj->get_Count();
    }

}
