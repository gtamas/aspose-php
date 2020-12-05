#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef STRING_OR_DOUBLE_CHART_VALUE_H
#define STRING_OR_DOUBLE_CHART_VALUE_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class StringOrDoubleChartValue : public AsposeObjectWrapper<IStringOrDoubleChartValue>, public Php::Base
    {
        public:
            StringOrDoubleChartValue(System::SharedPtr<IStringOrDoubleChartValue> cell) : AsposeObjectWrapper<IStringOrDoubleChartValue>(cell) {};
            void __construct(Php::Parameters &params);
            Php::Value get_AsCell();

    };

}

#endif
