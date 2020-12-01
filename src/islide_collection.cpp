#include "../include/aspose.h"
#include "../include/islide_collection.h"
#include "../include/slide.h"
#include "../include/util.h"
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
    void ISlideCollection::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns the number of slides in the collection.
     * 
     * @return Php::Value 
     */
    Php::Value ISlideCollection::size()
    {
        return this->_slides->get_Count();

    }

    /**
     * @brief Returns a slide from the collection.
     * 
     * @param params A 0 based index of the slide
     * @return Php::Value 
     */
    Php::Value ISlideCollection::get_Item(Php::Parameters &params)
    {
        int slideNo = params[0].numericValue();
        SharedPtr<ISlide> slide = this->_slides->idx_get(slideNo);
        Slide* phpSlide = new Slide(slide, "", "", "", slide->get_SlideNumber()); 
        return Php::Object("Slide", phpSlide);

    }


}
