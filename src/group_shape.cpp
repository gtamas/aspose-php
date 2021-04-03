#include "../include/aspose.h"
#include "../include/group_shape.h"
#include "../include/shape_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the shape collection for this group. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_group_shape#a22821ffaf95b993c19d9e490d9fa13ee
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_Shapes()
    {
        return Php::Object("AsposePhp\\Slides\\ShapeCollection", AsposeObjectWrapper<IGroupShape>::wrapObject<IShapeCollection, AsposePhp::ShapeCollection, &IGroupShape::get_Shapes>());
    }

    /**
     * @brief Returns true if shape is GroupShape. Always true.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::isGroupShape()
    {
        return true;
    }

    /**
     * @brief Returns true if shape is PictureFrame.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

    /**
     * @brief Returns true if shape is Connector.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::isConnector()
    {
        return Shape::isConnector();
    }

    /**
     * @brief Returns true if shape is AutoShape.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::isAutoShape()
    {
        return Shape::isAutoShape();
    }

    /**
     * @brief Returns true if shape is Chart.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::isChart()
    {
        return Shape::isChart();
    }

    /**
     * @brief Returns true if shape is Table.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::isTable()
    {
        return Shape::isTable();
    }

    /**
     * @brief Determines whether the shape is grouped. Read-only bool.
     *
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_IsGrouped()
    {
        return true;
    }

    /**
     * @brief Returns the height of the shape. Read float.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a746b51dddc1f01438ea7cd6907a8e9d2
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_Height()
    {
        return Shape::get_Height();
    }

    /**
     * @brief Returns the width of the shape. Read float.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a49505dd4a5cefa690f4b03d8ddf0b15e
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_Width()
    {
        return Shape::get_Width();
    }

    /**
     * @brief Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a87cc62a0c31399c5f0d4402eba36eeda
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    /**
     * @brief Returns the alternative text associated with a shape
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a4d2254f43168cd342909f38a93df8b95
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    /**
     * @brief Gets unique shape identifier in presentation scope. Read-only uint32_t. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#ab47c21d85e2f56036c5eda7e8e33dcba
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    /**
     * @brief Returns the name of a shape
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a3de41f504e4f9a728c3801159773487e
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_Name()
    {
        return Shape::get_UniqueId();
    }

    /**
     * @brief Returns the FillFormat object that contains fill formatting properties for a shape
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a938de6174746172e82a5e02fc4587ec3
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_FillFormat()
    {
        return Shape::get_FillFormat();
    }

}
