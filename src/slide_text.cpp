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
     * @brief The text on the slide's shapes
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_slide_text#ae232eaf26f50974c064b417e4756607b
     * @return Php::Value 
     */
    Php::Value SlideText::get_Text()
    {
        return _slideText->get_Text().ToUtf8String();
    }

    /**
     * @brief The text on the master page's shapes for this slide
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_slide_text#a16dab1854079439e41b70ec5972fbc4d
     * @return Php::Value as UTF-8 string
     */
    Php::Value SlideText::get_MasterText()
    {
        return _slideText->get_MasterText().ToUtf8String();
    }

    /**
     * @brief The text on the layout page's shapes for this slide
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_slide_text#a5d83fdf60ed64b5a379aaa1b4abe5583
     * @return Php::Value 
     */
    Php::Value SlideText::get_LayoutText()
    {
        return _slideText->get_LayoutText().ToUtf8String();
    }

    /**
     * @brief The text on the slide's shapes.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_slide_text#ae67106cea5e9751d4c4d81c4fc76ec96
     * @return Php::Value 
     */
    Php::Value SlideText::get_NotesText()
    {
        return _slideText->get_NotesText().ToUtf8String();
    }



}
