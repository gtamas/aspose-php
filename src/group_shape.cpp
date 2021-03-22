#include "../include/aspose.h"
#include "../include/group_shape.h"
#include "../include/shape_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns the shape collection for this group. 
     * @see Aspose::Slides::NotesSlide
     * 
     * @return Php::Value 
     */
    Php::Value GroupShape::get_Shapes() {
        return Php::Object("AsposePhp\\Slides\\ShapeCollection", AsposeObjectWrapper<IGroupShape>::wrapObject<IShapeCollection, AsposePhp::ShapeCollection, &IGroupShape::get_Shapes>());
    }

    Php::Value GroupShape::isGroupShape() {
        return true;
    }

    Php::Value GroupShape::isPictureFrame() {
        return Shape::isPictureFrame();
    }

    Php::Value GroupShape::isConnector() {
        return Shape::isConnector();
    }

    Php::Value GroupShape::isAutoShape() {
        return Shape::isAutoShape();
    }

    Php::Value GroupShape::isChart() {
        return Shape::isChart();
    }

    Php::Value GroupShape::isTable() {
        return Shape::isTable();
    }

    Php::Value GroupShape::get_IsGrouped() {
        return true;
    }

    Php::Value GroupShape::get_Height() {
        return Shape::get_Height();
    }

    Php::Value GroupShape::get_Width() {
        return Shape::get_Width();
    }

    Php::Value GroupShape::get_ParentGroup() {
         return Shape::get_ParentGroup();
    }

    Php::Value GroupShape::get_AlternativeText() {
        return Shape::get_AlternativeText();
    }

    Php::Value GroupShape::get_UniqueId() {
        return Shape::get_UniqueId();
    }

    Php::Value GroupShape::get_Name() {
        return Shape::get_UniqueId();
    }

    Php::Value GroupShape::get_FillFormat()
    {
        return Shape::get_FillFormat();
    }
    



}
