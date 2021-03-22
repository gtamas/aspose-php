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
            Php::Value isGroupShape();
            Php::Value isTable();
            Php::Value isAutoShape();
            Php::Value isChart();
            Php::Value isPictureFrame();
            Php::Value isConnector();
            Php::Value get_Shapes();
            Php::Value get_FillFormat();
            Php::Value get_AlternativeText();
            Php::Value get_UniqueId();
            Php::Value get_Name();
            Php::Value get_IsGrouped();
            Php::Value get_ParentGroup();
            Php::Value get_Height();
            Php::Value get_Width();
    };

}

#endif
