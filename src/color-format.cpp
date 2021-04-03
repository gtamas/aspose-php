#include "../include/aspose.h"
#include "../include/color-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System::Drawing;
using namespace System;

using namespace std;

namespace AsposePhp {

 
    /**
     * @brief Sets the color definition method
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.color_format#aa61a5768a5093ccde755369fcc097669
     * 
     * @param params Php::Parameters params 
     * @param params[0] string color The color value to set. Should be hexadecimal, like #FFFFFF 
     */
    void ColorFormat::set_Color(Php::Parameters &params) {
        String color = String(params[0].stringValue());
        Color c = ColorTranslator::FromHtml(color);
        _asposeObj->set_Color(c);
    }
 

}
