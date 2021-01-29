#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/<%= itemKebabPhpName %>.h"
#include "../include/<%= kebabPhpName %>.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace <%= ns %>;

namespace AsposePhp {

    /**
     * @brief Desc. 
     * 
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value <%= phpName %>::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("<%= phpNs %>", wrapObject<<%= itemClassName %>, AsposePhp::<%= itemPhpName %>, &<%= className %>::idx_get>(index));
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
    Php::Value <%= phpName %>::get_Count() {
        return _asposeObj->get_Count();
    }

    <% for (let i=0; i<methods.length; i++) { %>
    Php::Value <%= phpName %>::<%= methods[i].methodName %>() {
        return nullptr;
    }
    <% } %>

}
