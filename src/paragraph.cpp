#include "../include/aspose.h"
#include "../include/paragraph.h"
#include "../include/portion-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

    /**
     * @brief Gets the the plain text of a paragraph
     * 
     * @return Php::Value 
     */
    Php::Value Paragraph::get_Text() {
        return _asposeObj->get_Text().ToUtf8String();
    }

    /**
     * @brief Returns the collection of a text portions
     * 
     * @return Php::Value 
     */
    Php::Value Paragraph::get_Portions() {
        return Php::Object("AsposePhp\\Slides\\PortionCollection", wrapObject<IPortionCollection, AsposePhp::PortionCollection, &IParagraph::get_Portions>());
    }



}
