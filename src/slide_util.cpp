#include "../include/aspose.h"
#include "../include/slide_util.h"
#include "../include/slide.h"
#include "../include/master_slide.h"
#include "../include/text_frame.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns all text frames on a slide in a PPTX presentation.  
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.util.slide_util#a97da94e3fc5230cdfc0e30b444c127df
     * @param params Php::Parameters params
     * @param params[0] Slide obj Slide or MasterSlide The slide whose text is to be returned
     * @return Php::Value 
     */
    Php::Value SlideUtil::GetAllTextBoxes(Php::Parameters &params) {
        Php::Value object = params[0];

        ArrayPtr<SharedPtr<ITextFrame>> frames;
        
        if (object.instanceOf("AsposePhp\\Slides\\MasterSlide")) {
            MasterSlide * slide = (MasterSlide *) object.implementation();
            frames = Aspose::Slides::Util::SlideUtil::GetAllTextBoxes(slide->getAsposeClass());
        } else if(object.instanceOf("AsposePhp\\Slides\\Slide")) {
            Slide * slide = (Slide *) object.implementation();
            frames = Aspose::Slides::Util::SlideUtil::GetAllTextBoxes(slide->getAsposeClass());
        } else {
            throw Php::Exception("Wrong parameter passed");
        }

        vector<Php::Object> ret;

        for (int i = 0; i < frames->get_Count(); i++) {
            SharedPtr<ITextFrame> frame = frames->idx_get(i);
            TextFrame * phpValue = new TextFrame(frame);
            ret.push_back(Php::Object("AsposePhp\\Slides\\TextFrame", phpValue));
        }

        return Php::Array(ret);
    }

}
