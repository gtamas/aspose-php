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
     * @brief Returns a TextFrame with notes' text if there is one.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.notes_slide#a848ebd26aacbbc0f9200340aad8b6df9
     * @return Php::Value 
     */
    Php::Value NotesSlide::get_NotesTextFrame() {
        SharedPtr<ITextFrame> frame = _slide->get_NotesTextFrame();
        TextFrame * phpValue = new TextFrame(frame); 
        return Php::Object("AsposePhp\\Slides\\TextFrame", phpValue);
    }

}
