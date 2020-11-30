#include "../include/aspose.h"
#include "../include/slide_text.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    void SlideText::__construct(Php::Parameters &params)
    {

    }

    Php::Value SlideText::get_Text()
    {
        return _slideText->get_Text().ToUtf8String();
    }

    Php::Value SlideText::get_MasterText()
    {
        return _slideText->get_MasterText().ToUtf8String();
    }

    Php::Value SlideText::get_LayoutText()
    {
        return _slideText->get_LayoutText().ToUtf8String();
    }

    Php::Value SlideText::get_NotesText()
    {
        return _slideText->get_NotesText().ToUtf8String();
    }



}
