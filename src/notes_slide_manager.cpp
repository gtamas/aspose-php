#include "../include/aspose.h"
#include "../include/notes_slide_manager.h"
#include "../include/notes_slide.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns the notes slide for the current slide. Returns null if slide doesn't have notes slide.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.notes_slide_manager#af09f6ddca2bef4a1c6a1b3e23b543dc5 
     * 
     * @return Php::Value 
     */
    Php::Value NotesSlideManager::get_NotesSlide() {
        return Php::Object("AsposePhp\\Slides\\NotesSlide", wrapObject<INotesSlide, NotesSlide, &INotesSlideManager::get_NotesSlide>());
    }



}
