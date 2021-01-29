#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef IMAGECOLLECTION_H
#define IMAGECOLLECTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class ImageCollection  : public AsposeObjectWrapper<IImageCollection>, public Collection<IImageCollection>, public Php::Base
    {
        public:
            ImageCollection(System::SharedPtr<IImageCollection> col) : AsposeObjectWrapper<IImageCollection>(col), Collection<IImageCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            Php::Value AddImage(Php::Parameters &params);
            

    };

}

#endif
