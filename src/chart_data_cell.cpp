#include "../include/aspose.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>
#include <DOM/Chart/ChartDataCell.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the UTF8 string value of this data cell. 
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
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataCell::get_Row()
    {
        return _asposeObj->get_Row();
    }

    /**
     * @brief Sets the custom display format of numbers and dates. If value is empty will be used PresetNumberFormat value
     * 
     * @param params 
     * @return Php::Value 
     */
    void ChartDataCell::set_CustomNumberFormat(Php::Parameters &params)
    {
        std::string value = params[0].stringValue();
        return _asposeObj->set_CustomNumberFormat(String(value));
    }

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
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataCell::get_Column() {
        return _asposeObj->get_Column();
    }

} // namespace AsposePhp
