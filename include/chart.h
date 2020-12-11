#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef CHART_H
#define CHART_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class Chart : public AsposeObjectWrapper<IChart>, public AsposePhp::Shape
    {
        public:
            Chart(System::SharedPtr<IChart> shape) : AsposeObjectWrapper<IChart>(shape), Shape(shape) {
            };
            void __construct(Php::Parameters &params);
            Php::Value get_ChartData();
            Php::Value get_AlternativeText();
            Php::Value isGroupShape();
            Php::Value isTable();
            Php::Value isChart();

    };

}

#endif
