#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef MARKER_H
#define MARKER_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class Marker : public AsposeObjectWrapper<IMarker>, public Php::Base
    {
        public:
            Marker(System::SharedPtr<IMarker> obj) : AsposeObjectWrapper<IMarker>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value get_Format();
            

    };

}

#endif
