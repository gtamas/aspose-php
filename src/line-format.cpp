#include "../include/aspose.h"
#include "../include/line-format.h"
#include "../include/line-fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

 
    Php::Value LineFormat::get_FillFormat() {
         return Php::Object("AsposePhp\\Slides\\LineFillFormat", wrapObject<ILineFillFormat, AsposePhp::LineFillFormat, &ILineFormat::get_FillFormat>());
    }
 

}
