#include "../include/aspose.h"
#include "../include/slide_text.h"
#include "../include/presentation_text.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    void PresentationText::__construct(Php::Parameters &params)
    {

    }

    Php::Value PresentationText::get_SlidesText()
    {
        ArrayPtr<SharedPtr<ISlideText>> slideTexts = _text->get_SlidesText();
        vector<Php::Object> slideTextArr;
        int32_t slideTextCount = slideTexts->get_Length();

        for(int i = 0; i < slideTextCount; i++) {
                SharedPtr<ISlideText> slideText = slideTexts->idx_get(i);
                SlideText * phpSlideText = new SlideText(slideText);
                slideTextArr.push_back(Php::Object("SlideText", phpSlideText));
            }
            
        return Php::Array(slideTextArr);
    }



}
