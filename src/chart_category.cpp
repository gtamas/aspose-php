#include "../include/aspose.h"
#include "../include/chart_category.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns If true then AsCell property is actual. In other words, worksheet is used for storing category (this case supports a multi-level category). If false then AsLiteral property is actual. In other words, worksheet is NOT used for storing category (and this case doesn't support a multi-level categories).. 
     * 
     * @return Php::Value 
     */
    Php::Value ChartCategory::get_UseCell() {
        return _asposeObj->get_UseCell();
    }

    /**
     * @brief Returns Aspose.Cells.Cell object. If category is multi-level then used Aspose.Cells.Cell object for level "0". 
     * 
     * @return Php::Value 
     */
    Php::Value ChartCategory::get_AsCell() {
        return Php::Object("ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IChartCategory::get_AsCell>());
    }


}
