#include "../include/aspose.h"
#include "../include/line-fill-format.h"
#include "../include/color-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

    /**
     * @brief Sets the fill type. Write Slides::FillType.
     * 
     * @param params Php::Parameters params 
     * @param params[0] int fillType The fill type to set. See Aspose::Slides::FillType 
     */
    void LineFillFormat::set_FillType(Php::Parameters &params)
    {
        FillType type = (FillType)params[0].numericValue();
        _asposeObj->set_FillType(type);
    }


     /**
     * @brief Returns the color of a solid fill.
     * see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_line_fill_format#a2c187e5f99c920c4b9161e98d7ebbe7e
     *
     * @return Php::Value
     */
    Php::Value LineFillFormat::get_SolidFillColor()
    {
        return Php::Object("AsposePhp\\Slides\\ColorFormat", wrapObject<IColorFormat, AsposePhp::ColorFormat, &ILineFillFormat::get_SolidFillColor>());
    }
 

}
