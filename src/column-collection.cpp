#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/column.h"
#include "../include/column-collection.h"
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
    Php::Value ColumnCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\Column", wrapObject<IColumn, AsposePhp::Column, &IColumnCollection::idx_get>(index));
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
    Php::Value ColumnCollection::get_Count() {
        return _asposeObj->get_Count();
    }

    
    /**
     * @brief Removes a column at the specified position from a table
     * 
     * @param params 
     * @return Php::Value 
     */
    void ColumnCollection::RemoveAt(Php::Parameters &params) {
        int32_t index = params[0].numericValue();
        bool type = params[1].boolValue();

        _asposeObj->RemoveAt(index, type);
    }
    

}
