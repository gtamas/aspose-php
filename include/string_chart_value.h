#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef STRING_CHART_VALUE
#define STRING_CHART_VALUE

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class StringChartValue : public AsposeObjectWrapper<IStringChartValue>, public Php::Base
    {
        public:
            StringChartValue(System::SharedPtr<IStringChartValue> series) : AsposeObjectWrapper<IStringChartValue>(series) {};
            void __construct(Php::Parameters &params);
            Php::Value get_AsCells();

    };

}

#endif
