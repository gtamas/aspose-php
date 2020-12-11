#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef TABLE_H
#define TABLE_H

namespace AsposePhp {

    class Table : public AsposeObjectWrapper<ITable>, public Shape
    {
        public:
            Table(System::SharedPtr<ITable> shape) : AsposeObjectWrapper<ITable>(shape), Shape(shape) {};
            void __construct(Php::Parameters &params);
            Php::Value isGroupShape();
            Php::Value isTable();
            Php::Value isChart();
            Php::Value get_AlternativeText();

    };

}

#endif
