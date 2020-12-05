#include "../include/aspose.h"
#include "../include/notes_slide_manager.h"
#include "../include/notes_slide.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns a NotesSlide object wrapper. 
     * 
     * @return Php::Value 
     */
    Php::Value NotesSlideManager::get_NotesSlide() {
        return Php::Object("NotesSlide", wrapObject<INotesSlide, NotesSlide, &INotesSlideManager::get_NotesSlide>());
    }



}
