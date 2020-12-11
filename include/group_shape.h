#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef GROUP_SHAPE_H
#define GROUP_SHAPE_H

namespace AsposePhp {

    class GroupShape : public AsposeObjectWrapper<IGroupShape>, public Shape
    {
        public:
            GroupShape(System::SharedPtr<IGroupShape> shape) : AsposeObjectWrapper<IGroupShape>(shape), Shape(shape) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Shapes();
            Php::Value isGroupShape();
            Php::Value get_AlternativeText();
            Php::Value isTable();
            Php::Value isChart();


    };

}

#endif
