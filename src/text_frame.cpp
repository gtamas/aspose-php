#include "../include/aspose.h"
#include "../include/text_frame.h"
#include "../include/paragraph-collection.h"
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

    /**
     * @brief Sets text frame text content
     * 
     * @param params 
     */
    void TextFrame::set_Text(Php::Parameters &params) {
        std::string text = params[0].stringValue();
        _textFrame->set_Text(String(text));
    }


    /**
     * @brief Returns the list of all paragraphs in a frame
     * 
     * @return Php::Value 
     */
    Php::Value TextFrame::get_Paragraphs() {
        SharedPtr<IParagraphCollection> items = _textFrame->get_Paragraphs();
        ParagraphCollection * phpValue = new ParagraphCollection(items); 
        return Php::Object("AsposePhp\\Slides\\ParagraphCollection", phpValue);
    }


}
