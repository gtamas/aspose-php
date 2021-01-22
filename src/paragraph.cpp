#include "../include/aspose.h"
#include "../include/paragraph.h"
#include "../include/portion-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

    Php::Value Paragraph::get_Text() {
        return _asposeObj->get_Text().ToUtf8String();
    }

    Php::Value Paragraph::get_Portions() {
        return Php::Object("AsposePhp\\Slides\\PortionCollection", wrapObject<IPortionCollection, AsposePhp::PortionCollection, &IParagraph::get_Portions>());
    }



}
