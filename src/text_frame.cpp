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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.text_frame#a11b936424186374e93378f37fddb6756
     * @return Php::Value 
     */
    Php::Value TextFrame::get_Text() {
        return _textFrame->get_Text().ToUtf8String();
    }

    /**
     * @brief Sets text frame text content
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.text_frame#a7ee97d4bb5d890ec6b16da863660ed0b
     * @param params Php::Parameters
     * @param params[0] string value The new text
     */
    void TextFrame::set_Text(Php::Parameters &params) {
        std::string text = params[0].stringValue();
        _textFrame->set_Text(String(text));
    }


    /**
     * @brief Returns the list of all paragraphs in a frame
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.text_frame#a3f04070b38fee5a4773a5bc79772d945
     * @return Php::Value 
     */
    Php::Value TextFrame::get_Paragraphs() {
        SharedPtr<IParagraphCollection> items = _textFrame->get_Paragraphs();
        ParagraphCollection * phpValue = new ParagraphCollection(items); 
        return Php::Object("AsposePhp\\Slides\\ParagraphCollection", phpValue);
    }


}
