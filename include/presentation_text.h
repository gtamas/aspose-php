#include <phpcpp.h>
#include "../include/aspose.h"

using namespace std;

#ifndef PRESENTATION_TEXT_H
#define PRESENTATION_TEXT_H


namespace AsposePhp {

    class PresentationText : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::IPresentationText> _text;
        public:
            PresentationText(System::SharedPtr<Aspose::Slides::IPresentationText> text) : _text(text) {};
            virtual ~PresentationText() {
                _text.reset();
            };
            
            void __construct(Php::Parameters &params);
            Php::Value get_SlidesText();

    };

}

#endif
