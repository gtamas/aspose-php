#include "../include/aspose.h"
#include "../include/islide_collection.h"
#include "../include/slide.h"
#include "../include/util.h"
#include <phpcpp.h>
#include "../include/slide.h"

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_generic_collection#a326ea00c3ee827e399d3d4a6e7b63f35
     * @return Php::Value 
     */
    Php::Value ISlideCollection::get_Count()
    {
        return this->_slides->get_Count();
    }

    /**
     * @brief An alias to size(). Don't use it.
     * @deprecated
     * 
     * @return Php::Value 
     */
    Php::Value ISlideCollection::size()
    {
        return this->get_Count();
    }


     /**
     * @brief Returns a slide from the collection.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_slide_collection#a640042758d7f73745c4e6a0eceb5524e
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * 
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ISlideCollection::idx_get(Php::Parameters &params)
    {
        int slideNo = params[0].numericValue();
        try
        {
            SharedPtr<ISlide> slide = this->_slides->idx_get(slideNo);
            Slide *phpSlide = new Slide(slide, "", "", "", slide->get_SlideNumber());
            return Php::Object("AsposePhp\\Slides\\Slide", phpSlide);
        }
        catch (System::ArgumentOutOfRangeException &e)
        {
            throw Php::Exception("Invalid index: " + to_string(slideNo));
        }
    }


    /**
     * @brief An alias to idx_get. Don't use it.
     * @deprecated
     */
    Php::Value ISlideCollection::get_Item(Php::Parameters &params)
    {
        return this->idx_get(params);
    }

    /**
     * @brief Adds a copy of a specified slide to the end of the collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_slide_collection#a0c84ed19c8b1730eb8010613a1c229ee
     * 
     * @param params Php::Parameters params 
     * @param params[0] Slide slide The PHP Slide object to be cloned 
     * @return Php::Value 
     */
    Php::Value ISlideCollection::AddClone(Php::Parameters &params)
    {
        Php::Value object = params[0];
        Slide *phpSlide = (Slide *)object.implementation();
        try
        {
            SharedPtr<ISlide> slide = _slides->AddClone(phpSlide->getAsposeClass());
            Slide *phpValue = new Slide(slide, "", "", "", slide->get_SlideNumber());
            return Php::Object("AsposePhp\\Slides\\Slide", phpValue);
        }
        catch (Aspose::Slides::PptxEditException &e)
        {
            throw Php::Exception(e.what());
        }
        catch (std::exception &e)
        {
            throw Php::Exception(e.what());
        }
    }

} // namespace AsposePhp
