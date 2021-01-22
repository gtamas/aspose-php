#include "../include/aspose.h"
#include "../include/layout_slide.h"
#include "../include/master_slide.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the master slide for a layout.  
     * 
     * @return Php::Value 
     */
    Php::Value LayoutSlide::get_MasterSlide() {
        return Php::Object("AsposePhp\\Slides\\MasterSlide", wrapObject<IMasterSlide, AsposePhp::MasterSlide, &ILayoutSlide::get_MasterSlide>());
    }

}
