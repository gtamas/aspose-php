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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_layout_slide#a72ac46e03b57e031966200c1a143a763
     * @return Php::Value 
     */
    Php::Value LayoutSlide::get_MasterSlide() {
        return Php::Object("AsposePhp\\Slides\\MasterSlide", wrapObject<IMasterSlide, AsposePhp::MasterSlide, &ILayoutSlide::get_MasterSlide>());
    }

}
