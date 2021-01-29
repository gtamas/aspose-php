#include "../include/aspose.h"
#include "../include/portion.h"
#include <phpcpp.h>
#include "../include/portion-format.h"


using namespace Aspose::Slides;

using namespace std;
using namespace System;

namespace AsposePhp
{

    /**
     * @brief Sets the plain text of a portion. Write System::String
     * 
     * @param params 
     */
    void Portion::set_Text(Php::Parameters &params)
    {
        std::string text = params[0].stringValue();
        _asposeObj->set_Text(String(text));
    }

    /**
     * @brief Gets the plain text of a portion. Read System::String
     * 
     * @return Php::Value 
     */
    Php::Value Portion::get_Text()
    {
        return _asposeObj->get_Text().ToUtf8String();
    }

    /**
     * @brief Returns oformatting bject which contains explicitly set formatting properties of the text portion with no inheritance applied. Read-only IPortionFormat
     * 
     * @return Php::Value 
     */
    Php::Value Portion::get_PortionFormat()
    {
        return Php::Object("AsposePhp\\Slides\\PortionFormat", wrapObject<IPortionFormat, AsposePhp::PortionFormat, &IPortion::get_PortionFormat>());
    }

} // namespace AsposePhp
