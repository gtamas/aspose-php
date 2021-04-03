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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.base_portion_format#afc1ec10a19de14fbda5bffea750a78d9
     * @return Php::Value 
     */
    Php::Value PortionFormat::get_FillFormat()
    {
        return Php::Object("AsposePhp\\Slides\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &IPortionFormat::get_FillFormat>());
    }

} // namespace AsposePhp
