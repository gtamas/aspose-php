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
     * 
     * @return Php::Value 
     */
    Php::Value DataLabel::get_TextFrameForOverriding() {
        return Php::Object("TextFrame", wrapObject<ITextFrame, AsposePhp::TextFrame, &IDataLabel::get_TextFrameForOverriding>());
    }

    /**
     * @brief Returns actual label text based on DataLabelFormat settings or TextFrameForOverriding.Text value
     * 
     * @return Php::Value 
     */
    Php::Value DataLabel::GetActualLabelText () {
        return _asposeObj->GetActualLabelText().ToUtf8String();
    }



}
