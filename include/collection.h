#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;

#ifndef COLLECTION_H
#define COLLECTION_H

namespace AsposePhp {

    template <typename T>
    class Collection
    {
        protected: 
            System::SharedPtr<T> _colObj;
        public:
            Collection(System::SharedPtr<T> colObj) : _colObj(colObj) {};
            virtual ~Collection() {
                _colObj.reset();
            };
        public:
            Php::Value get_Count() {
                return _colObj->get_Count();
            }

    };

}

#endif
