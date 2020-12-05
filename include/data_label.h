#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

using namespace Aspose::Slides::Charts;

#ifndef DATA_LABEL_H
#define DATA_LABEL_H

namespace AsposePhp {

    class DataLabel : public AsposeObjectWrapper<IDataLabel>, public Php::Base
    {
        public:
            DataLabel(System::SharedPtr<IDataLabel> label) : AsposeObjectWrapper<IDataLabel>(label) {};
            void __construct(Php::Parameters &params);
            Php::Value get_TextFrameForOverriding();
            Php::Value GetActualLabelText();

    };

}

#endif
