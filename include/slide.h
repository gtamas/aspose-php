#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef SLIDE_H
#define SLIDE_H

namespace AsposePhp {

    class Slide : public Php::Base 
    {
        private:
            System::SharedPtr<Aspose::Slides::ISlide> _slide;
            std::string _text;
            std::string _layoutText;
            std::string _notesText;
            std::string _masterText;
            int _slideNo;
            std::string getAllText(System::SharedPtr<Aspose::Slides::ISlide> slide);
            std::vector<System::SharedPtr<Aspose::Slides::Charts::Chart>> getShapes(System::SharedPtr<Aspose::Slides::ISlide> slide, System::String shapeName); 
           
        public:
            Slide() = default;
            Slide(System::SharedPtr<Aspose::Slides::ISlide> slide, std::string layoutText, std::string notesText, std::string masterText, int slideNo) 
            : _slide(slide), _layoutText(layoutText), _notesText(notesText), _masterText(masterText), _slideNo(slideNo) {
                _text = this->getAllText(slide);
            };
            virtual ~Slide() {
                _slide.reset();
            };
            
            void __construct(Php::Parameters &params);

            Php::Value get_Shapes();
            Php::Value get_NotesSlideManager();
            Php::Value getSlideNumber();
            Php::Value getNotesText();
            Php::Value getMasterText();
            Php::Value getLayoutText();
            Php::Value getSlideText();



    };

}

#endif