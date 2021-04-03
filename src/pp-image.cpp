#include "../include/aspose.h"
#include "../include/pp-image.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {


    /**
     * @brief Returns a width of an image. Read-only int32_t
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.p_p_image#a7eb696d1ca18b3c09dc5fdccd6b0ad90
     * @return Php::Value 
     */
    Php::Value PPImage::get_Width() {
        return _asposeObj->get_Width();
    }


    /**
     * @brief Returns a height of an image. Read-only int32_t
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.p_p_image#a9540d2145e1e13e3f67b8b8881683d22
     * @return Php::Value 
     */
     Php::Value PPImage::get_Height() {
        return _asposeObj->get_Height();
    }

    /**
     * @brief Returns a MIME type of an image, encoded in IPPImage::get_BinaryData. Read-only System::String
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.p_p_image#a2433cea5ff97a25e86f24527d877e106
     * @return Php::Value 
     */
    Php::Value PPImage::get_ContentType() {
        return _asposeObj->get_ContentType().ToUtf8String();
    }

}
