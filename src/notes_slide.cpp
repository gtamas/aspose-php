#include "../include/aspose.h"
#include "../include/notes_slide.h"
#include "../include/text_frame.h"
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
    void NotesSlide::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns the TextFrame object which contains the notes text string
     * 
     * @return Php::Value 
     */
    Php::Value NotesSlide::get_NotesTextFrame() {
        SharedPtr<ITextFrame> frame = _slide->get_NotesTextFrame();
        TextFrame * phpValue = new TextFrame(frame); 
        return Php::Object("AsposePhp\\Slides\\TextFrame", phpValue);
    }

}
