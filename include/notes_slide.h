#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef NOTES_SLIDE
#define NOTES_SLIDE

namespace AsposePhp {

    class NotesSlide : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::INotesSlide> _slide;
        public:
            NotesSlide(System::SharedPtr<Aspose::Slides::INotesSlide> slide) : _slide(slide) {};
            virtual ~NotesSlide() {
                _slide.reset();
            };
            
            void __construct(Php::Parameters &params);
            Php::Value get_NotesTextFrame();

    };

}

#endif
