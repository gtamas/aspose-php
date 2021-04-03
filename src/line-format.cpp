#include "../include/aspose.h"
#include "../include/line-format.h"
#include "../include/line-fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

 
    /**
     * @brief Returns the fill format of a line
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.line_format#a30627e88c99b89837677857612819db8
     * @return Php::Value 
     */
    Php::Value LineFormat::get_FillFormat() {
         return Php::Object("AsposePhp\\Slides\\LineFillFormat", wrapObject<ILineFillFormat, AsposePhp::LineFillFormat, &ILineFormat::get_FillFormat>());
    }
 

}
