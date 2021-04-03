#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/portion.h"
#include "../include/portion-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp {

    /**
     * @brief Gets the element at the specified index 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.portion_collection#aac1137d882a2832b5143817d2e8d60f8
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value PortionCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\Portion", wrapObject<IPortion, AsposePhp::Portion, &IPortionCollection::idx_get>(index));
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.portion_collection#a0f357e511e40bf0fb4f278c825769479
     * @return Php::Value 
     */
    Php::Value PortionCollection::get_Count() {
        return _asposeObj->get_Count();
    }

    

}
