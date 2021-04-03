#include "../include/aspose.h"
#include "../include/column.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp
{

    /**
    * @brief Sets the width of a column. Write double
    * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.column#aea40815ba57e7e9016cc9a5d1c133694
    * 
    * @param params Php::Parameters params 
    * @param params[0] double value The new value 
    */
    void Column::set_Width(Php::Parameters &params)
    {

        double value = params[0].numericValue();
        _asposeObj->set_Width(value);
    }

}
