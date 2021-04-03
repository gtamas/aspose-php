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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.portion#a548ce4eacc7a6a5a3bf7ae6ff9de61af
     * @param params Php::Parameters params 
     * @param params[0] string value The text to set 
     */
    void Portion::set_Text(Php::Parameters &params)
    {
        std::string text = params[0].stringValue();
        _asposeObj->set_Text(String(text));
    }

    /**
     * @brief Gets the plain text of a portion. Read System::String
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.portion#a43d65233c545d7f5a708a7dfe695076f
     * @return Php::Value 
     */
    Php::Value Portion::get_Text()
    {
        return _asposeObj->get_Text().ToUtf8String();
    }

    /**
     * @brief Returns formatting object which contains explicitly set formatting properties of the text portion with no inheritance applied. Read-only IPortionFormat
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.portion#a3789a446dd23ae825abc41dfdb7fb400
     * @return Php::Value 
     */
    Php::Value Portion::get_PortionFormat()
    {
        return Php::Object("AsposePhp\\Slides\\PortionFormat", wrapObject<IPortionFormat, AsposePhp::PortionFormat, &IPortion::get_PortionFormat>());
    }

} // namespace AsposePhp
