#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef SHAPE_COLLECTION_H
#define SHAPE_COLLECTION_H

namespace AsposePhp {

    class ShapeCollection : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::IShapeCollection> _shapes;
        public:
            ShapeCollection(System::SharedPtr<Aspose::Slides::IShapeCollection> shapes) : _shapes(shapes) {};
            virtual ~ShapeCollection() {
                _shapes.reset();
            };
            
            void __construct(Php::Parameters &params);
            
            Php::Value ToArray();
            void Remove(Php::Parameters &params);

    };

}

#endif
