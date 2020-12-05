
#include <phpcpp.h>
#include "../include/aspose.h"
#include <BuildVersionInfo.h>
#include "../include/aspose_util.h"

using namespace Aspose::Slides;

namespace AsposePhp {


    /**
     * @brief Returns Aspose lib version.
     * 
     * @return Php::Value 
     */
    Php::Value AsposeUtil::getVersion()
    {

        int32_t major = BuildVersionInfo::ProductMajor();
        int32_t minor = BuildVersionInfo::ProductMinor();
        char buffer [10];
        sprintf(buffer, "%d.%d", major, minor);
        return buffer;
    }

}
