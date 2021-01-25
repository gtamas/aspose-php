#include "../include/aspose.h"
#include "../include/column.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp {

        /**
         * @brief Sets the width of a column. Write double
         * 
         * @param params 
         */
        void Column::set_Width(Php::Parameters &params) {
            double value = params[0].numericValue();
            _asposeObj->set_Width(value);
        }

}
