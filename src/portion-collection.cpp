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
     * @brief Desc. 
     * 
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
     * 
     * @return Php::Value 
     */
    Php::Value PortionCollection::get_Count() {
        return _asposeObj->get_Count();
    }

    

}
