#include "../include/aspose.h"
#include "../include/shape_collection.h"
#include "../include/shape.h"
#include "../include/chart.h"
#include "../include/group_shape.h"
#include "../include/table.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief PHP Constructor
     * 
     * @param params 
     */
    void ShapeCollection::__construct(Php::Parameters &params)
    {
    }

    /**
     * @brief Removes the given shape from collection
     * 
     * @param params 
     */
    void ShapeCollection::Remove(Php::Parameters &params)
    {
        Php::Value object = params[0]; 
        Shape * shape = (Shape *) object.implementation();
        _shapes->Remove(shape->getAsposeClass());
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

        for (int i = 0; i < len; i++)
        {
            SharedPtr<IShape> shape = shapes->idx_get(i);
            string shapeName = "Shape";
            SharedPtr<Aspose::Slides::Charts::Chart> chart = Shape::convert<Aspose::Slides::Charts::Chart>(shape);
            if (chart != nullptr)
            {
                Chart *phpValue = new Chart(chart);
                arr.push_back(Php::Object("AsposePhp\\Slides\\Charts\\Chart", phpValue));
                continue;
            }
            SharedPtr<Aspose::Slides::GroupShape> gs = Shape::convert<Aspose::Slides::GroupShape>(shape);
            if (gs != nullptr)
            {
                GroupShape *phpValue = new GroupShape(gs);
                arr.push_back(Php::Object("AsposePhp\\Slides\\GroupShape", phpValue));
                continue;
            }
            SharedPtr<Aspose::Slides::Table> table = Shape::convert<Aspose::Slides::Table>(shape);
            if (table != nullptr)
            {
                Table *phpValue = new Table(table);
                arr.push_back(Php::Object("AsposePhp\\Slides\\Table", phpValue));
                continue;
            }

            Shape *phpValue = new Shape(shape);
            arr.push_back(Php::Object("AsposePhp\\Slides\\Shape", phpValue));
        }

        return Php::Array(arr);
    }

} // namespace AsposePhp
