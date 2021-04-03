#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/row.h"
#include "../include/row-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp
{

    /**
     * @brief Returns the row at the specified index. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.row_collection#a9633b1d27c943693f8d802a273c58ad1
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value RowCollection::idx_get(Php::Parameters &params)
    {
        int index = params[0].numericValue();
        try
        {
            return Php::Object("AsposePhp\\Slides\\Row", wrapObject<IRow, AsposePhp::Row, &IRowCollection::idx_get>(index));
        }
        catch (System::ArgumentOutOfRangeException &e)
        {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.row_collection#a0c6fe67e32400622019a951451044f00
     * @return Php::Value 
     */
    Php::Value RowCollection::get_Count()
    {
        return _asposeObj->get_Count();
    }

    /**
     * @brief Removes a row at the specified position from a table
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.row_collection#ace556a43551344162b6d0db614571a70
     * @param params Php::Parameters    
     * @param params[0] int index The index of the item to remove 
     */
    void RowCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        bool type = params[1].boolValue();

        _asposeObj->RemoveAt(index, type);
    }

} // namespace AsposePhp
