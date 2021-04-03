#include "../include/aspose.h"
#include "../include/fill-format.h"
#include "../include/color-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp
{

    /**
     * @brief Sets the type of filling
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_fill_format#a38adf1b338a84a54aa48b7b447c7920e
     * @param params 
     */
    void FillFormat::set_FillType(Php::Parameters &params)
    {
        FillType type = (FillType)params[0].numericValue();
        _asposeObj->set_FillType(type);
    }

    /**
     * @brief Returns the fill color.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_fill_format#a978e561a7f49dc7ce3c96e4cfe8f640a
     * @return Php::Value 
     */
    Php::Value FillFormat::get_SolidFillColor()
    {
        return Php::Object("AsposePhp\\Slides\\ColorFormat", wrapObject<IColorFormat, AsposePhp::ColorFormat, &IFillFormat::get_SolidFillColor>());
    }

} // namespace AsposePhp
