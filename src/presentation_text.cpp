#include "../include/aspose.h"
#include "../include/slide_text.h"
#include "../include/presentation_text.h"
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
    void PresentationText::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns an array of SlideText objects which hold text elements. There could be less SlideText objects than the number
     * of the actual slides.
     * 
     * @return Php::Value 
     */
    Php::Value PresentationText::get_SlidesText()
    {
        ArrayPtr<SharedPtr<ISlideText>> slideTexts = _text->get_SlidesText();
        vector<Php::Object> slideTextArr;
        int32_t slideTextCount = slideTexts->get_Length();

        for(int i = 0; i < slideTextCount; i++) {
                SharedPtr<ISlideText> slideText = slideTexts->idx_get(i);
                SlideText * phpSlideText = new SlideText(slideText);
                slideTextArr.push_back(Php::Object("AsposePhp\\Slides\\SlideText", phpSlideText));
            }
            
        return Php::Array(slideTextArr);
    }



}
