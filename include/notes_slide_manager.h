#include <phpcpp.h>
#include "../include/aspose.h"

using namespace std;

#ifndef NOTES_SLIDE_MANAGER
#define NOTES_SLIDE_MANAGER

namespace AsposePhp {

    class NotesSlideManager : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::INotesSlideManager> _manager;
        public:
            NotesSlideManager(System::SharedPtr<Aspose::Slides::INotesSlideManager> manager) : _manager(manager) {};
            virtual ~NotesSlideManager() {
                _manager.reset();
            };
            
            void __construct(Php::Parameters &params);
            Php::Value get_NotesSlide();

    };

}

#endif
