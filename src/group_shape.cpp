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

    Php::Value GroupShape::isChart() {
        return Shape::isChart();
    }

    Php::Value GroupShape::isTable() {
        return Shape::isTable();
    }

    Php::Value GroupShape::get_AlternativeText() {
        return Shape::get_AlternativeText();
    }



}