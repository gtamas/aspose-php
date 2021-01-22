#include "../include/aspose.h"
#include "../include/format.h"
#include "../include/fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides::Charts;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns fill style properties of a chart
     * 
     * @return Php::Value 
     */
    Php::Value Format::get_Fill()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &IFormat::get_Fill>());
    }

} // namespace AsposePhp
