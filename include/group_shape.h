#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef GROUP_SHAPE_H
#define GROUP_SHAPE_H

namespace AsposePhp {

    class GroupShape : public AsposeObjectWrapper<IGroupShape>, public Php::Base
    {
        public:
            GroupShape(System::SharedPtr<IGroupShape> shape) : AsposeObjectWrapper<IGroupShape>(shape) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Shapes();

    };

}

#endif
