#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef PARAGRAPHCOLLECTION_H
#define PARAGRAPHCOLLECTION_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class ParagraphCollection  : public AsposeObjectWrapper<IParagraphCollection>, public Collection<IParagraphCollection>, public Php::Base
    {
        public:
            ParagraphCollection(System::SharedPtr<IParagraphCollection> col) : AsposeObjectWrapper<IParagraphCollection>(col), Collection<IParagraphCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            

    };

}

#endif
