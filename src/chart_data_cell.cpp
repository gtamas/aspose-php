#include "../include/aspose.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the UTF8 string value of this data cell. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_cell#a02d5b346a018c911b040fca030e1fc1a
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataCell::get_Value()
    {
        if(_asposeObj) {
            auto value = _asposeObj->get_Value();
            if(value == nullptr) {
                return "";
            }
            return _asposeObj->get_Value()->ToString().ToUtf8String();
        } 
        return "";
    }

    /**
     * @brief Returns the index of the row of worksheet in which the cell is located
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_cell#ad5d79837407a66fcbcd49855766c3e1f
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataCell::get_Row()
    {
        return _asposeObj->get_Row();
    }

    /**
     * @brief Sets the custom display format of numbers and dates. If value is empty will be used PresetNumberFormat value
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_cell#a3647cb863d72d0e5f13e03557d227d65
     * 
     * @param params Php::Parameters
     * @param params[0] string The name of the number format
     * @return Php::Value 
     */
    void ChartDataCell::set_CustomNumberFormat(Php::Parameters &params)
    {
        std::string value = params[0].stringValue();
        return _asposeObj->set_CustomNumberFormat(String(value));
    }

    /**
     * @brief Sets the value.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_cell#ad5ef4d22314d81dd99b1a271d69669a7
     * 
     * @param params Php::Parameters
     * @param params[0] string value The value to set
     * @param params[1] string type The data type of the value
     */
    void ChartDataCell::set_Value(Php::Parameters &params)
    {
        std::string value = params[0].stringValue();
        std::string type = params[1].stringValue();

        if(type == "int") {
             _asposeObj->set_Value(System::ObjectExt::Box<int>(std::stoi(value)));
        } else if(type == "float") {
             _asposeObj->set_Value(System::ObjectExt::Box<float>(std::stof(value)));
        } else {
             _asposeObj->set_Value(System::ObjectExt::Box<String>(String(value)));
        }
    }



    /**
     * @brief Returns the index of the column of worksheet in which the cell is located. Read-only int32_t
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_cell#a9c88c0203b01b17df9091e4359d9f269
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataCell::get_Column() {
        return _asposeObj->get_Column();
    }

} // namespace AsposePhp
