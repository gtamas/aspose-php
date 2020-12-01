#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef TEXT_FRAME_H
#define TEXT_FRAME_H

namespace AsposePhp {

    class TextFrame : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::ITextFrame> _textFrame;
        public:
            TextFrame(System::SharedPtr<Aspose::Slides::ITextFrame> textFrame) : _textFrame(textFrame) {};
            virtual ~TextFrame() {
                _textFrame.reset();
            };
            
            void __construct(Php::Parameters &params);
            Php::Value get_Text();

    };

}

#endif
