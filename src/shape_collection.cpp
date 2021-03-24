#include "../include/aspose.h"
#include "../include/shape_collection.h"
#include "../include/shape.h"
#include "../include/chart.h"
#include "../include/group_shape.h"
#include "../include/table.h"
#include "../include/auto-shape.h"
#include "../include/picture-frame.h"
#include "../include/connector.h"
#include "../include/picture-frame.h"
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
            if (ObjectExt::Is<Aspose::Slides::Charts::Chart>(shape))
            {
                Chart *phpValue = new Chart(Shape::convert<Aspose::Slides::Charts::Chart>(shape));
                arr.push_back(Php::Object("AsposePhp\\Slides\\Charts\\Chart", phpValue));
            } else if (ObjectExt::Is<Aspose::Slides::GroupShape>(shape))
            {
                GroupShape *phpValue = new GroupShape(Shape::convert<Aspose::Slides::GroupShape>(shape));
                arr.push_back(Php::Object("AsposePhp\\Slides\\GroupShape", phpValue));
            } else if (ObjectExt::Is<Aspose::Slides::Table>(shape))
            {
                Table *phpValue = new Table(Shape::convert<Aspose::Slides::Table>(shape));
                arr.push_back(Php::Object("AsposePhp\\Slides\\Table", phpValue));
            } else if (ObjectExt::Is<Aspose::Slides::PictureFrame>(shape))
            {
                PictureFrame *phpValue = new PictureFrame(Shape::convert<Aspose::Slides::PictureFrame>(shape));
                arr.push_back(Php::Object("AsposePhp\\Slides\\PictureFrame", phpValue));
            } else if (ObjectExt::Is<Aspose::Slides::Connector>(shape))
            {
                Connector *phpValue = new Connector(Shape::convert<Aspose::Slides::Connector>(shape));
                arr.push_back(Php::Object("AsposePhp\\Slides\\Connector", phpValue));
            } else if (ObjectExt::Is<Aspose::Slides::AutoShape>(shape))
            {
                AutoShape *phpValue = new AutoShape(Shape::convert<Aspose::Slides::AutoShape>(shape));
                arr.push_back(Php::Object("AsposePhp\\Slides\\AutoShape", phpValue));
            } else {
                Shape *phpValue = new Shape(shape);
                arr.push_back(Php::Object("AsposePhp\\Slides\\Shape", phpValue));
            }

        }

        return Php::Array(arr);
    }

    /**
     * @brief Creates a new PictureFrame and adds it to the end of the collection
     * 
     * @param params 
     * @return Php::Value 
     */
    Php::Value ShapeCollection::AddPictureFrame(Php::Parameters &params)
    {
        ShapeType type = (ShapeType) params[0].numericValue();
        float x = params[1].floatValue();
        float y = params[2].floatValue();
        float width = params[3].floatValue();
        float height = params[4].floatValue();
        Php::Value imgObj = params[5];
        SharedPtr<Aspose::Slides::PPImage> img = (Aspose::Slides::PPImage *) imgObj.implementation();
        SharedPtr<Aspose::Slides::IPictureFrame> result = _shapes->AddPictureFrame(type,x,y,width,height,img);
        PictureFrame *phpValue = new PictureFrame(result);
        return Php::Object("AsposePhp\\Slides\\PictureFrame", phpValue);

    }




} // namespace AsposePhp
