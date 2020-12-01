#include "../include/aspose.h"
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
    void TextFrame::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns the textframe content as UTF-8 String.
     * 
     * @return Php::Value 
     */
    Php::Value TextFrame::get_Text() {
        return _textFrame->get_Text().ToUtf8String();
    }



}
