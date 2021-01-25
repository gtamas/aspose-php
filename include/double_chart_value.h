#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef DOUBLE_CHART_VALUE_H
#define DOUBLE_CHART_VALUE_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class DoubleChartValue : public AsposeObjectWrapper<IDoubleChartValue>, public Php::Base
    {
        public:
            DoubleChartValue(System::SharedPtr<IDoubleChartValue> cell) : AsposeObjectWrapper<IDoubleChartValue>(cell) {};
            void __construct(Php::Parameters &params);
            Php::Value get_AsCell();
            void set_Data(Php::Parameters &params);

    };

}

#endif
