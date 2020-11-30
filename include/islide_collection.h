#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef ISLIDE_COLLECTION_H
#define ISLIDE_COLLECTION_H

namespace AsposePhp {

    class ISlideCollection : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::ISlideCollection> _slides;
        public:
            ISlideCollection(System::SharedPtr<Aspose::Slides::ISlideCollection> slides) : _slides(slides) {};
            virtual ~ISlideCollection() = default;
            
            void __construct(Php::Parameters &params);
            
            Php::Value size();
            Php::Value get_Item(Php::Parameters &params);

    };

}

#endif
