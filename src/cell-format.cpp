#include "../include/aspose.h"
#include "../include/cell-format.h"
#include "../include/fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns a cell fill properties object. Read-only IFillFormat
     * 
     * @return Php::Value 
     */
    Php::Value CellFormat::get_FillFormat() {
        return Php::Object("AsposePhp\\Slides\\Charts\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &ICellFormat::get_FillFormat>());
    }

}
