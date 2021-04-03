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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart#a35354845dc641d09dc22b38e2ed0e311
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_ChartData()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartData", AsposeObjectWrapper<IChart>::wrapObject<IChartData, AsposePhp::ChartData, &IChart::get_ChartData>());
    }

    /**
     * @brief Returns the alternative text associated with a chart. UTF8 string.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a881872af9669da1dfe9a51a894b8dfcf
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_AlternativeText()
    {
        return this->Shape::_asposeObj->get_AlternativeText().ToUtf8String();
    }

    /**
     * @brief Returns true if shape is GroupShape.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::isGroupShape()
    {
        return Shape::isGroupShape();
    }

    /**
     * @brief Returns true if shape is Chart. Always true.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::isChart()
    {
        return true;
    }

    /**
     * @brief Returns true if shape is AutoShape.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::isAutoShape()
    {
        return Shape::isAutoShape();
    }

    /**
     * @brief Returns true if shape is PictureFrame.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

    /**
     * @brief Returns true if shape is Table.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::isTable()
    {
        return Shape::isTable();
    }

    /**
     * @brief Returns true if shape is Connector.
     * 
     * @return Php::Value 
     */
    Php::Value Chart::isConnector()
    {
        return Shape::isConnector();
    }

    /**
     * @brief Returns the height of the shape. Read float
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a77d2a6b7c54b09a0968bd9b32e8b292d
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_Height()
    {
        return Shape::get_Height();
    }

    /**
     * @brief Returns the width of the shape. Read float
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a7fa9a747ccf07632e69b26e9699f34f7
     * @return Php::Value 
     */
    Php::Value Chart::get_Width()
    {
        return Shape::get_Width();
    }

    /**
     * @brief Determines whether the shape is grouped. Read-only bool
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#aa7d7a0f57dcc8bbcf521858f44d7fda8
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    /**
     * @brief Returns parent GroupShape object if shape is grouped. Otherwise returns null.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#af358f46d82b1e2c1942cc6afef897a8e
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    /**
     * @brief Gets unique shape identifier in slide scope. Read-only uint32_t. See also Shape::get_UniqueId for getting unique shape identifier in presentation scope
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a03a7b856e59931340e7fcffb5e4ecc81
     * @return Php::Value 
     */
    Php::Value Chart::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    /**
     * @brief Returns the name of a shape. Must be not null. Use empty string value if needed
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#ae804b4e10eb56606de229ed31f373180
     * @return Php::Value 
     */
    Php::Value Chart::get_Name()
    {
        return Shape::get_Name();
    }

    /**
     * @brief Returns the chart type. Read ChartType
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart#a12ec23ffebe832b3d12dbfee550441c8
     * 
     * @return Php::Value 
     */
    Php::Value Chart::get_Type()
    {
        return (int32_t)AsposeObjectWrapper<IChart>::_asposeObj->get_Type();
    }

    /**
     * @brief Returns the FillFormat object that contains fill formatting properties for a shape. Note: can return null for certain types of shapes which don't have fill properties.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a1bfe6f11a0dad278184d03ca10d27359
     *
     * @return Php::Value 
     */
    Php::Value Chart::get_FillFormat()
    {
        return Shape::get_FillFormat();
    }

} // namespace AsposePhp
