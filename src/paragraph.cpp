#include "../include/aspose.h"
#include "../include/paragraph.h"
#include "../include/portion-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

    /**
     * @brief Gets the the plain text of a paragraph
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_paragraph#a1ac3971726e5ec549ca3945bd71e06d3
     * @return Php::Value 
     */
    Php::Value Paragraph::get_Text() {
        return _asposeObj->get_Text().ToUtf8String();
    }

    /**
     * @brief Returns the collection of a text portions
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_paragraph#a9a026fad1445f25b3acac30325875286
     * @return Php::Value 
     */
    Php::Value Paragraph::get_Portions() {
        return Php::Object("AsposePhp\\Slides\\PortionCollection", wrapObject<IPortionCollection, AsposePhp::PortionCollection, &IParagraph::get_Portions>());
    }



}
