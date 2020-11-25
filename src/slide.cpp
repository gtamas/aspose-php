#include "../include/aspose.h"
#include "../include/slide.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    void Slide::__construct(Php::Parameters &params)
    {

    }

    Php::Value Slide::getSlideNumber() {
        return _slideNo;
    }

    Php::Value Slide::getSlideText() {
        return _text;
    }

    Php::Value Slide::getLayoutText() {
        return _layoutText;
    }

    Php::Value Slide::getMasterText() {
        return _masterText;
    }

    Php::Value Slide::getNotesText() {
        return _notesText;
    }

    std::string Slide::getAllText(SharedPtr<ISlide> slide) {

        string text;

        ArrayPtr<SharedPtr<ITextFrame>> textFramesSlide = Util::SlideUtil::GetAllTextBoxes(slide);

            for (int i = 0; i < textFramesSlide->get_Length(); i++)
            {
                SharedPtr<ITextFrame> textFrame = textFramesSlide->idx_get(i);
                for (int paragraph_index = 0; paragraph_index < textFrame->get_Paragraphs()->get_Count(); ++paragraph_index)
                {
                    SharedPtr<IParagraph> paragraph = textFrame->get_Paragraphs()->idx_get(paragraph_index);
                    for (int portion_index = 0; portion_index < paragraph->get_Portions()->get_Count(); ++portion_index)
                    {
                        SharedPtr<IPortion> portion = paragraph->get_Portions()->idx_get(portion_index);
                        text += portion->get_Text().ToUtf8String();
                    }
                }
            }

        return text;

    }

}
