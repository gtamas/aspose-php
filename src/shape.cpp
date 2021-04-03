#include "../include/aspose.h"
#include "../include/shape.h"
#include "../include/group_shape.h"
#include "../include/fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns true if shape is Table, otherwise it returns false.
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isTable()
    {

        return isShape<Table>();
    }

    /**
     * @brief Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isChart()
    {

        return isShape<Chart>();
    }

    /**
     * @brief Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isGroupShape()
    {

        return isShape<GroupShape>();
    }

    /**
     * @brief Returns true if shape is AutoShape, otherwise it returns false
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isAutoShape()
    {

        return isShape<AutoShape>();
    }

    /**
     * @brief Returns true if shape is PictureFrame, otherwise it returns false
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isPictureFrame()
    {

        return isShape<PictureFrame>();
    }

    /**
     * @brief Returns true if shape is Connector, otherwise it returns false
     * 
     * @return Php::Value 
     */
    Php::Value Shape::isConnector()
    {

        return isShape<Connector>();
    }

    /**
     * @brief Returns the height of the shape. Read float
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a77d2a6b7c54b09a0968bd9b32e8b292d
     * @return Php::Value 
     */
    Php::Value Shape::get_Height()
    {
        return _asposeObj->get_Height();
    }

    /**
     * @brief Returns the width of the shape. Read float
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a7fa9a747ccf07632e69b26e9699f34f7
     * @return Php::Value 
     */
    Php::Value Shape::get_Width()
    {
        return _asposeObj->get_Width();
    }

    /**
     * @brief Gets unique id (int)
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a03a7b856e59931340e7fcffb5e4ecc81
     * @return Php::Value 
     */
    Php::Value Shape::get_UniqueId()
    {
        return (int32_t)_asposeObj->get_UniqueId();
    }

    /**
     * @brief Gets the name of the shape.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#ae804b4e10eb56606de229ed31f373180
     * @return Php::Value 
     */
    Php::Value Shape::get_Name()
    {
        return _asposeObj->get_Name().ToUtf8String();
    }

    /**
     * @brief Returns the alt text of the shape as string
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a881872af9669da1dfe9a51a894b8dfcf
     * @return Php::Value 
     */
    Php::Value Shape::get_AlternativeText()
    {
        return this->_asposeObj->get_AlternativeText().ToUtf8String();
    }

    /**
     * @brief Determines whether the shape is grouped
     * 
     * @return Php::Value 
     */
    Php::Value Shape::get_IsGrouped()
    {
        return _asposeObj->get_IsGrouped();
    }

    /**
     * @brief Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#aa7d7a0f57dcc8bbcf521858f44d7fda8
     * @return Php::Value 
     */
    Php::Value Shape::get_ParentGroup()
    {
        return Php::Object("AsposePhp\\Slides\\GroupShape", wrapObject<IGroupShape, AsposePhp::GroupShape, &IShape::get_ParentGroup>());
    }

    /**
     * @brief Returns the FillFormat object that contains fill formatting properties for a shape
     * @#see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a1bfe6f11a0dad278184d03ca10d27359
     * @return Php::Value 
     */
    Php::Value Shape::get_FillFormat()
    {
        return Php::Object("AsposePhp\\Slides\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &IShape::get_FillFormat>());
    }

} // namespace AsposePhp
