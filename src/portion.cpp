#include "../include/aspose.h"
#include "../include/portion.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;
using namespace System;

namespace AsposePhp {

    void Portion::set_Text(Php::Parameters &params) {
        std::string text = params[0].stringValue();
        _asposeObj->set_Text(String(text));
    }

    Php::Value Portion::get_Text() {
        return _asposeObj->get_Text().ToUtf8String();
    }



}
