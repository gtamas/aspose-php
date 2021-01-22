#include "../include/aspose.h"
#include "../include/portion-format.h"
#include "../include/fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the text FillFormat properties. No inheritance applied
     * 
     * @return Php::Value 
     */
    Php::Value PortionFormat::get_FillFormat()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &IPortionFormat::get_FillFormat>());
    }

} // namespace AsposePhp
