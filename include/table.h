#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef TABLE_H
#define TABLE_H

namespace AsposePhp {

    class Table : public AsposeObjectWrapper<ITable>, public Php::Base
    {
        public:
            Table(System::SharedPtr<ITable> shape) : AsposeObjectWrapper<ITable>(shape) {};
            void __construct(Php::Parameters &params);

    };

}

#endif
