#include "../include/aspose.h"
#include "../include/shape_collection.h"
#include "../include/shape.h"
#include "../include/chart.h"
#include <phpcpp.h>
#include <variant>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief PHP Constructor
     * 
     * @param params 
     */
    void ShapeCollection::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Converts the shape collection to Array, casting shapes to appropriate type.
     * Currently only Tables and Charts are recognized, everything else is Shape object.
     * 
     * @return Php::Value 
     */
    Php::Value ShapeCollection::ToArray()
    {
        ArrayPtr<SharedPtr<IShape>> shapes = _shapes->ToArray();
        vector<Php::Object> arr;
        int32_t len = shapes->get_Length();

        for(int i = 0; i < len; i++) {
            SharedPtr<IShape> shape = shapes->idx_get(i);
            string shapeName = "Shape";
            SharedPtr<Aspose::Slides::Charts::Chart> chart = Shape::convert<Aspose::Slides::Charts::Chart>(shape);
            if(chart != nullptr) {
                Chart * phpValue =  new Chart(chart);
                arr.push_back(Php::Object("Chart", phpValue));
            } else {
                Shape * phpValue = new Shape(shape);
                arr.push_back(Php::Object("Shape", phpValue));
            }
            
        }
            
        return Php::Array(arr);

    }


}
