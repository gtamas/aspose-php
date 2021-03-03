#include "../include/aspose.h"
#include "../include/color-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System::Drawing;
using namespace System;

using namespace std;

namespace AsposePhp {

 
    void ColorFormat::set_Color(Php::Parameters &params) {
        String color = String(params[0].stringValue());
        Color c = ColorTranslator::FromHtml(color);
        _asposeObj->set_Color(c);
    }
 

}
