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
     * @brief Returns the row at the specified index. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell_collection#a8f3baa7fb31fc5cb99f4f8eb0364eb66
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell_collection#aea0ed17d231b7024f2b94c423615bda9
     * @return Php::Value 
     */
    Php::Value Row::get_Count() {
        return _asposeObj->get_Count();
    }

    /**
     * @brief Sets the minimal possible height of a row. Write double
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.row#a9d569dc6983c230138aabbd2b1acd029
     * @param params Php::Parameters
     * @param params[0] double value The new minimal height
     */
    void Row::set_MinimalHeight(Php::Parameters &params) {
        double value = params[0].numericValue();
        _asposeObj->set_MinimalHeight(value);
    }

}
