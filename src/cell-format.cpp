#include "../include/aspose.h"
#include "../include/cell-format.h"
#include "../include/fill-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns a cell fill properties object. Read-only IFillFormat
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell_format#a19c9da70fa403f9346e6b3755e4201bb
     * 
     * @return Php::Value 
     */
    Php::Value CellFormat::get_FillFormat() {
        return Php::Object("AsposePhp\\Slides\\FillFormat", wrapObject<IFillFormat, AsposePhp::FillFormat, &ICellFormat::get_FillFormat>());
    }

}
