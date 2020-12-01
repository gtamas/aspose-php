#include "../include/aspose.h"
#include "../include/notes_slide_manager.h"
#include "../include/notes_slide.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief PHP Constructor
     * 
     * @param params 
     */
    void NotesSlideManager::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns a NotesSlide object wrapper. 
     * @see Aspose::Slides::NotesSlide
     * 
     * @return Php::Value 
     */
    Php::Value NotesSlideManager::get_NotesSlide() {
        SharedPtr<INotesSlide> slide = _manager->get_NotesSlide();
        NotesSlide * phpSlide = new NotesSlide(slide); 
        return Php::Object("NotesSlide", phpSlide);
    }



}
