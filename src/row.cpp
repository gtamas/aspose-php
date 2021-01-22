#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/cell.h"
#include "../include/row.h"
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
    Php::Value Row::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\Cell", wrapObject<ICell, AsposePhp::Cell, &IRow::idx_get>(index));
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
    Php::Value Row::get_Count() {
        return _asposeObj->get_Count();
    }

    /**
     * @brief Sets the minimal possible height of a row. Write double
     * 
     * @param params 
     */
    void Row::set_MinimalHeight(Php::Parameters &params) {
        double value = params[0].numericValue();
        _asposeObj->set_MinimalHeight(value);
    }

}
