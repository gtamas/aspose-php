#include "../include/aspose.h"
#include "../include/filltype.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the given fill type or null if doesn't exist.
     * 
     * @return Php::Value 
     */
    Php::Value FillType::get(Php::Parameters &params)
    {
        string type = String(params[0].stringValue()).ToLower().ToUtf8String();

        if(type == "solid") {
            return (int8_t) Aspose::Slides::FillType::Solid;
        } else if(type == "notdefined") {
            return (int8_t) Aspose::Slides::FillType::NotDefined;
        }  else if(type == "nofill") {
            return (int8_t) Aspose::Slides::FillType::NoFill;
        } else if(type == "gradient") {
            return (int8_t) Aspose::Slides::FillType::NotDefined;
        } else if(type == "pattern") {
            return (int8_t) Aspose::Slides::FillType::Pattern;
        } else if(type == "picture") {
            return (int8_t) Aspose::Slides::FillType::Picture;
        } else if(type == "group") {
            return (int8_t) Aspose::Slides::FillType::Group;
        } 

        return nullptr;

    }

} // namespace AsposePhp
