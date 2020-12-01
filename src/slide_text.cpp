#include "../include/aspose.h"
#include "../include/slide_text.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief The PHP Constructor
     * 
     * @param params 
     */
    void SlideText::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns all text from the slide as UTF-8 string
     * 
     * @return Php::Value 
     */
    Php::Value SlideText::get_Text()
    {
        return _slideText->get_Text().ToUtf8String();
    }

    /**
     * @brief Returns the master text as UTF-8 string
     * 
     * @return Php::Value as UTF-8 string
     */
    Php::Value SlideText::get_MasterText()
    {
        return _slideText->get_MasterText().ToUtf8String();
    }

    /**
     * @brief Returns the layout text as UTF-8 string
     * 
     * @return Php::Value 
     */
    Php::Value SlideText::get_LayoutText()
    {
        return _slideText->get_LayoutText().ToUtf8String();
    }

    /**
     * @brief Returns the notes text as UTF-8 string.
     * 
     * @return Php::Value 
     */
    Php::Value SlideText::get_NotesText()
    {
        return _slideText->get_NotesText().ToUtf8String();
    }



}
