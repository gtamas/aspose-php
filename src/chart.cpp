#include "../include/aspose.h"
#include "../include/chart.h"
#include "../include/chart_data.h"
#include "../include/shape_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns information about the linked or embedded data associated with a chart. 
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_ChartData() {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartData",AsposeObjectWrapper<IChart>::wrapObject<IChartData, AsposePhp::ChartData, &IChart::get_ChartData>());
    }

    /**
     * @brief Returns the alternative text associated with a chart. UTF8 string.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_AlternativeText() {
        return this->Shape::_asposeObj->get_AlternativeText().ToUtf8String();
    }


    Php::Value Chart::isGroupShape() {
        return Shape::isGroupShape();
    }

    Php::Value Chart::isChart() {
        return true;
    }

    Php::Value Chart::isTable() {
        return Shape::isTable();
    }



}
