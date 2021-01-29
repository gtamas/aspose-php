#include "../include/aspose.h"
#include "../include/pp-image.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns a width of an image. Read-only int32_t
     * 
     * @return Php::Value 
     */
    Php::Value PPImage::get_Width() {
        return _asposeObj->get_Width();
    }


    /**
     * @brief Returns a height of an image. Read-only int32_t
     * 
     * @return Php::Value 
     */
     Php::Value PPImage::get_Height() {
        return _asposeObj->get_Height();
    }

    /**
     * @brief Returns a MIME type of an image, encoded in IPPImage::get_BinaryData. Read-only System::String
     * 
     * @return Php::Value 
     */
    Php::Value PPImage::get_ContentType() {
        return _asposeObj->get_ContentType().ToUtf8String();
    }

}
