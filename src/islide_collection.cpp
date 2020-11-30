#include "../include/aspose.h"
#include "../include/islide_collection.h"
#include "../include/slide.h"
#include "../include/util.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    void ISlideCollection::__construct(Php::Parameters &params)
    {

    }

    Php::Value ISlideCollection::size()
    {
        return this->_slides->get_Count();

    }

    Php::Value ISlideCollection::get_Item(Php::Parameters &params)
    {
        int slideNo = params[0].numericValue();
        SharedPtr<ISlide> slide = this->_slides->idx_get(slideNo);
        Slide* phpSlide = new Slide(slide, "", "", "", slide->get_SlideNumber()); 
        return Php::Object("Slide", phpSlide);

    }


}
