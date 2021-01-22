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
     * @brief Desc. 
     * 
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
     * 
     * @return Php::Value 
     */
    Php::Value RowCollection::get_Count()
    {
        return _asposeObj->get_Count();
    }

    void RowCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        bool type = params[1].boolValue();

        _asposeObj->RemoveAt(index, type);
    }

} // namespace AsposePhp
