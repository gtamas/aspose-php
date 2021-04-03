#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/pp-image.h"
#include "../include/base64.h"
#include "../include/image-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp
{

    /**
     * @brief Returns image by its index.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_image_collection#aa2177dc21db5f1c177ea97f355f54964 
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ImageCollection::idx_get(Php::Parameters &params)
    {
        int index = params[0].numericValue();
        try
        {
            return Php::Object("AsposePhp\\Slides\\PPImage", wrapObject<IPPImage, AsposePhp::PPImage, &IImageCollection::idx_get>(index));
        }
        catch (System::ArgumentOutOfRangeException &e)
        {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of behaviors in a collection. Read-only int32_t
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_generic_collection#a326ea00c3ee827e399d3d4a6e7b63f35
     * 
     * @return Php::Value 
     */
    Php::Value ImageCollection::get_Count()
    {
        return _asposeObj->get_Count();
    }

    /**
     * @brief Add an image to a presentation
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_image_collection#aa2177dc21db5f1c177ea97f355f54964
     * 
     * @param params Php::Parameters 
     * @param params[0] string fileOrEncoded File path to Base64 string value 
     * @param params[1] bool isBase64 Is this a base64 string 
     * @return Php::Value 
     */
    Php::Value ImageCollection::AddImage(Php::Parameters &params)
    {
        String fileOrEncoded = String(params[0].stringValue());
        bool isBase64 = params[1].boolValue();
        SharedPtr<IPPImage> img;

        try
        {
            if (!isBase64)
            {
                auto fileStream = System::MakeObject<IO::FileStream>(fileOrEncoded, IO::FileMode::Open);
                img = _asposeObj->AddImage(fileStream, LoadingStreamBehavior::KeepLocked);
            }
            else
            {
                ArrayPtr<BYTE> byteArray = MakeArray<BYTE>(Base64::decode(fileOrEncoded.ToUtf8String()));
                img = _asposeObj->AddImage(byteArray);
            }
        } catch(IO::EndOfStreamException &e) {
            throw Php::Exception(e.what());
        }

        PPImage *phpValue = new PPImage(img);
        return Php::Object("AsposePhp\\Slides\\PPImage", phpValue);
    }

} // namespace AsposePhp
