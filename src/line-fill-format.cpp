#include "../include/aspose.h"
#include "../include/line-fill-format.h"
#include "../include/color-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {


    void LineFillFormat::set_FillType(Php::Parameters &params)
    {
        FillType type = (FillType)params[0].numericValue();
        _asposeObj->set_FillType(type);
    }


     /**
     * Sets a single-line title.
     *
     * @param string $title A text for the title.
     *
     * @return void
     */
    Php::Value LineFillFormat::get_SolidFillColor()
    {
        return Php::Object("AsposePhp\\Slides\\ColorFormat", wrapObject<IColorFormat, AsposePhp::ColorFormat, &ILineFillFormat::get_SolidFillColor>());
    }
 

}
