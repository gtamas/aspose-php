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
        return Php::Object("ShapeCollection", wrapObject<IShapeCollection, AsposePhp::ShapeCollection, &IGroupShape::get_Shapes>());
    }



}
