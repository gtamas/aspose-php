#include "../include/aspose.h"
#include "../include/slide.h"
#include "../include/notes_slide_manager.h"
#include "../include/util.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief PHP constructor
     * 
     * @param params 
     */
    void Slide::__construct(Php::Parameters &params)
    {


    }

    /**
     * @brief Returns the index of this slide
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getSlideNumber() {
        return _slide->get_SlideNumber();
    }

    /**
     * @brief Returns all text from slide
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getSlideText() {
        return _text;
    }

    /**
     * @brief Returns the layout text
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getLayoutText() {
        return _layoutText;
    }

    /**
     * @brief Returns the master text
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getMasterText() {
        return _masterText;
    }

    /**
     * @brief Returns the notes text
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getNotesText() {
        return _notesText;
    }

    /**
     * @brief Returns the SlideManager instance.
     * 
     * @return Php::Value 
     */
    Php::Value Slide::get_NotesSlideManager() {
        SharedPtr<INotesSlideManager> slideManager = _slide->get_NotesSlideManager();
        NotesSlideManager * phpValue = new NotesSlideManager(slideManager); 
        return Php::Object("NotesSlideManager", phpValue);
    }


    /**
     * @brief Returns all shapes of given type from a slide
     * 
     * @param slide The slide object
     * @param shapeName The name / type of the shape to return
     * @return vector<SharedPtr<Chart>> 
     */
   vector<SharedPtr<Chart>> Slide::getShapes(SharedPtr<ISlide> slide, String shapeName) {
        SharedPtr<IShapeCollection> shapes = slide->get_Shapes();
        int32_t numShapes = shapes->get_Count();

        vector<SharedPtr<Chart>> retShapes;

        for (int i = 0; i < numShapes; i++) {
            SharedPtr<IShape> shape = shapes->idx_get(i);
            if(ObjectExt::GetType(shape).get_Name() == shapeName) {
                retShapes.push_back(DynamicCast<Chart>(shape));
            }
        }

        return retShapes;
   }

    /**
     * @brief Returns all text frames from a slide as string.
     * 
     * @param slide The slide object
     * @return std::string 
     */
    std::string Slide::getAllText(SharedPtr<ISlide> slide) {

        string text;

        //vector<SharedPtr<Chart>> charts = this->getShapes(slide, u"Chart");

        //cout << charts[0]->get_Name() << endl;

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
