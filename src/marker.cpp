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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.marker#a47fb32c7640e064461d5897bd6c06840
     * 
     * @return Php::Value 
     */
    Php::Value Marker::get_Format()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\Format", wrapObject<IFormat, AsposePhp::Format, &IMarker::get_Format>());
    }

} 
