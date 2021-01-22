#include "../include/aspose.h"
#include "../include/chart.h"
#include "../include/chart_data.h"
#include "../include/shape_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns information about the linked or embedded data associated with a chart. 
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_ChartData()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartData", AsposeObjectWrapper<IChart>::wrapObject<IChartData, AsposePhp::ChartData, &IChart::get_ChartData>());
    }

    /**
     * @brief Returns the alternative text associated with a chart. UTF8 string.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_AlternativeText()
    {
        return this->Shape::_asposeObj->get_AlternativeText().ToUtf8String();
    }

    Php::Value Chart::isGroupShape()
    {
        return Shape::isGroupShape();
    }

    Php::Value Chart::isChart()
    {
        return true;
    }

    Php::Value Chart::isAutoShape()
    {
        return Shape::isAutoShape();
    }

    Php::Value Chart::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

    Php::Value Chart::isTable()
    {
        return Shape::isTable();
    }

    Php::Value Chart::isConnector()
    {
        return Shape::isConnector();
    }

    Php::Value Chart::get_Height()
    {
        return Shape::get_Height();
    }

    Php::Value Chart::get_Width()
    {
        return Shape::get_Width();
    }

    Php::Value Chart::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    Php::Value Chart::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    Php::Value Chart::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    Php::Value Chart::get_Name()
    {
        return Shape::get_Name();
    }

    Php::Value Chart::get_Type()
    {
        return (int32_t)AsposeObjectWrapper<IChart>::_asposeObj->get_Type();
    }

} // namespace AsposePhp
