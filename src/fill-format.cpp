#include "../include/aspose.h"
#include "../include/fill-format.h"
#include "../include/color-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp
{

    void FillFormat::set_FillType(Php::Parameters &params)
    {
        FillType type = (FillType)params[0].numericValue();
        _asposeObj->set_FillType(type);
    }

    Php::Value FillFormat::get_SolidFillColor()
    {
        return Php::Object("AsposePhp\\Slides\\ColorFormat", wrapObject<IColorFormat, AsposePhp::ColorFormat, &IFillFormat::get_SolidFillColor>());
    }

} // namespace AsposePhp
