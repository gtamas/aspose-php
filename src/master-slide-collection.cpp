#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/master_slide.h"
#include "../include/master-slide-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp {

    /**
     * @brief Desc. 
     * 
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value MasterSlideCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\MasterSlide", wrapObject<IMasterSlide, AsposePhp::MasterSlide, &IMasterSlideCollection::idx_get>(index));
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection
     * 
     * @return Php::Value 
     */
    Php::Value MasterSlideCollection::get_Count() {
        return _asposeObj->get_Count();
    }

    

}
