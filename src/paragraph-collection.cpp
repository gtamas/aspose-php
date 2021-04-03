#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/paragraph.h"
#include "../include/paragraph-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp {

    /**
     * @brief Gets the element at the specified index 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.paragraph_collection#ab233243e2f3bf49bd8499feefc6c4648
    * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ParagraphCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        try {
            return Php::Object("AsposePhp\\Slides\\Paragraph", wrapObject<IParagraph, AsposePhp::Paragraph, &IParagraphCollection::idx_get>(index));
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Gets the number of elements actually contained in the collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.paragraph_collection#adfedbaf9ee91fd76a609996a295077d5
     * @return Php::Value 
     */
    Php::Value ParagraphCollection::get_Count() {
        return _asposeObj->get_Count();
    }

    

}
