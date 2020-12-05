#include <phpcpp.h>
#include "../include/aspose_php.h"
#include "../include/aspose.h"

using namespace std;

#ifndef NOTES_SLIDE_MANAGER
#define NOTES_SLIDE_MANAGER

namespace AsposePhp {

    class NotesSlideManager : public AsposeObjectWrapper<INotesSlideManager>, public Php::Base
    {
        public:
            void __construct(Php::Parameters &params);
            
            NotesSlideManager(System::SharedPtr<INotesSlideManager> notes) : AsposeObjectWrapper<INotesSlideManager>(notes) {};
            Php::Value get_NotesSlide();


    };

}

#endif
