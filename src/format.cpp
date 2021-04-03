#include "../include/aspose.h"
#include "../include/format.h"
#include "../include/fill-format.h"
#include <phpcpp.h>
#include "../include/line-format.h"

using namespace Aspose::Slides::Charts;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns fill style properties of a chart
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.format#a62f0a89f1ed10e7d8d4d9242e787e023
     * @return Php::Value 
     */
    Php::Value Format::get_Fill()
    {
        return Php::Object("AsposePhp\\Slides\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &IFormat::get_Fill>());
    }

    /**
     * @brief Returns line style properties of a chart
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.format#a1fe4adbedd851e93fba1ace482d4cafa
     * @return Php::Value 
     */
    Php::Value Format::get_Line()
    {
        return Php::Object("AsposePhp\\Slides\\LineFormat", wrapObject<ILineFormat, AsposePhp::LineFormat, &IFormat::get_Line>());
    }

} // namespace AsposePhp
