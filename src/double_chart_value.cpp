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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.double_chart_value#a6be5dc426533ecf05c741e206e15b3dc
     * 
     * @return Php::Value 
     */
    Php::Value DoubleChartValue::get_AsCell() {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataCell", wrapObject<IChartDataCell, AsposePhp::ChartDataCell, &IDoubleChartValue::get_AsCell>());
    }

    /**
     * @brief Sets data
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.double_chart_value#a003d70ed0c7f06e9479e91fb3f967a43
     * @param Php::Parameters params 
     */
    void DoubleChartValue::set_Data(Php::Parameters &params) {
          /**
         * @brief 
         * @remark Param description:
         * @remark string value The new value
         */
        std::string value = params[0].stringValue();
        _asposeObj->set_Data(System::ObjectExt::Box<String>(String(value)));
    }

}
