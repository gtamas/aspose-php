#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/pp-image.h"
#include "../include/base64.h"
#include "../include/image-collection.h"
#include <LoadingStreamBehavior.h>
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

using namespace Aspose::Slides;

namespace AsposePhp
{

    /**
     * @brief Desc. 
     * 
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
     * @brief Returns the number of items in collection
     * 
     * @return Php::Value 
     */
    Php::Value ImageCollection::get_Count()
    {
        return _asposeObj->get_Count();
    }

    /**
     * @brief Add an image to a presentation
     * 
     * @param params 
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
