#include "../include/aspose.h"
#include "../include/double_chart_value.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns chart data cell. 
     * 
     * @return Php::Value 
     */
    Php::Value DoubleChartValue::get_AsCell() {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IDoubleChartValue::get_AsCell>());
    }

    /**
     * @brief Sets data
     * 
     * @param params 
     */
    void DoubleChartValue::set_Data(Php::Parameters &params) {
        std::string value = params[0].stringValue();
        _asposeObj->set_Data(System::ObjectExt::Box<String>(String(value)));
    }

}
