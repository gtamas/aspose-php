#include "../include/aspose.h"
#include "../include/picture-frame.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;
using namespace System;

namespace AsposePhp
{

  /**
     * @brief Returns true if shape is GroupShape.
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::isGroupShape()
    {
        return Shape::isGroupShape();
    }

     /**
     * @brief Returns true if shape is chart
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::isChart()
    {
        return Shape::isChart();
    }

    /**
     * @brief Returns true if shape is table.
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::isTable()
    {
        return Shape::isTable();;
    }

    /**
     * @brief Returns true if shape is AutoShape
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::isAutoShape()
    {
        return Shape::isAutoShape();
    }

  /**
     * @brief Returns true if shape is Connector
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::isConnector()
    {
        return Shape::isConnector();
    }

    /**
     * @brief Returns true if shape is PictureFrame, otherwise it returns false
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::isPictureFrame()
    {

        return true;
    }

     /**
     * @brief Returns the height of the shape. Read float.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a746b51dddc1f01438ea7cd6907a8e9d2
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_Height()
    {
        return Shape::get_Height();
    }

    /**
     * @brief Returns the width of the shape. Read float.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a7fa9a747ccf07632e69b26e9699f34f7
     * 
     * @return Php::Value 
     */

    Php::Value PictureFrame::get_Width()
    {
        return Shape::get_Width();
    }

    /**
     * @brief Determines whether the shape is grouped. Read-only bool
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#aa7d7a0f57dcc8bbcf521858f44d7fda8
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    /**
     * @brief Returns parent GroupShape object if shape is grouped. Otherwise returns null.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#af358f46d82b1e2c1942cc6afef897a8e
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    /**
     * @brief Returns the alternative text associated with a shape
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a881872af9669da1dfe9a51a894b8dfcf
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    /**
     * @brief Gets unique shape identifier in slide scope. Read-only uint32_t. See also Shape::get_UniqueId for getting unique shape identifier in presentation scope
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a03a7b856e59931340e7fcffb5e4ecc81
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    /**
     * @brief Returns the FillFormat object that contains fill formatting properties for a shape. Note: can return null for certain types of shapes which don't have fill properties.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a1bfe6f11a0dad278184d03ca10d27359
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_FillFormat()
    {
        return Shape::get_FillFormat();
    }

    /**
     * @brief Returns the name of a shape. Must be not null. Use empty string value if needed
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#ae804b4e10eb56606de229ed31f373180
     * 
     * @return Php::Value 
     */
    Php::Value PictureFrame::get_Name()
    {
        return Shape::get_Name();
    }

} // namespace AsposePhp
