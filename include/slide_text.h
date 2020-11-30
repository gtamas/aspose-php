#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef SLIDE_TEXT_H
#define SLIDE_TEXT_H


namespace AsposePhp {

    class SlideText : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::ISlideText> _slideText;
        public:
            SlideText(System::SharedPtr<Aspose::Slides::ISlideText> slideText) : _slideText(slideText) {};
            virtual ~SlideText() {
                _slideText.reset();
            };
            
            void __construct(Php::Parameters &params);
            Php::Value get_Text();
            Php::Value get_MasterText();
            Php::Value get_LayoutText();
            Php::Value get_NotesText();

    };

}

#endif
