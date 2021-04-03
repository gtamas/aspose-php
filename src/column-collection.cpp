#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/column.h"
#include "../include/column-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp
{

    /**
     * @brief Desc. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.column_collection#ac794a92fe0c4129d0a39a27fad6d3c97
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ColumnCollection::idx_get(Php::Parameters &params)
    {
        int index = params[0].numericValue();
        try
        {
            return Php::Object("AsposePhp\\Slides\\Column", wrapObject<IColumn, AsposePhp::Column, &IColumnCollection::idx_get>(index));
        }
        catch (System::ArgumentOutOfRangeException &e)
        {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.column_collection#aed7a46b69eceadf729aedc2fa665c9ce
     * @return Php::Value 
     */
    Php::Value ColumnCollection::get_Count()
    {
        return _asposeObj->get_Count();
    }

    /**
     * @brief Removes a column at the specified position from a table
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.column_collection#a9608721dedc00f779263e8ef4df7a7d2
     * 
     * @param params Php::Parameters 
     * @param params[0] int index The index of the element to remove 
     * @return Php::Value 
     */
    void ColumnCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        bool type = params[1].boolValue();

        _asposeObj->RemoveAt(index, type);
    }

}
