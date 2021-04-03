#include "../include/aspose.h"
#include "../include/data_label.h"
#include "../include/text_frame.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief Can contain a rich formatted text. If this property is not null then this formatted text value overrides auto-generated text of data label. Auto-generated text of data label means text that is managed by ShowSeriesName, ShowValue, ... properties and is formatted with the TextFormatManager.TextFormat property.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.data_label#ace27d41b2f73dfbb3f426463a633e4ac
     * @return Php::Value 
     */
    Php::Value DataLabel::get_TextFrameForOverriding() {
        return Php::Object("AsposePhp\\Slides\\TextFrame", wrapObject<ITextFrame, AsposePhp::TextFrame, &IDataLabel::get_TextFrameForOverriding>());
    }

    /**
     * @brief Returns actual label text based on DataLabelFormat settings or TextFrameForOverriding.Text value
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.data_label#acae9d0292001b6a42bc6490e4c25a474
     * @return Php::Value 
     */
    Php::Value DataLabel::GetActualLabelText () {
        return _asposeObj->GetActualLabelText().ToUtf8String();
    }



}
