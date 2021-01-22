#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef PARAGRAPH_H
#define PARAGRAPH_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class Paragraph : public AsposeObjectWrapper<IParagraph>, public Php::Base
    {
        public:
            Paragraph(System::SharedPtr<IParagraph> obj) : AsposeObjectWrapper<IParagraph>(obj) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Text();
            Php::Value get_Portions();
             

    };

}

#endif
