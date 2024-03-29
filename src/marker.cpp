#include "../include/aspose.h"
#include "../include/marker.h"
#include "../include/format.h"
#include <phpcpp.h>

using namespace Aspose::Slides::Charts;

using namespace std;

namespace AsposePhp
{

    /**
     * @brief Gets the marker fill
     * 
     * @return Php::Value 
     */
    Php::Value Marker::get_Format()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Format", wrapObject<IFormat, AsposePhp::Format, &IMarker::get_Format>());
    }

} 
