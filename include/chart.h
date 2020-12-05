#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CHART_H
#define CHART_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class Chart : public AsposeObjectWrapper<IChart>, public Php::Base
    {
        public:
            Chart(System::SharedPtr<IChart> shape) : AsposeObjectWrapper<IChart>(shape) {};
            void __construct(Php::Parameters &params);
            Php::Value get_ChartData();
            Php::Value get_AlternativeText();

    };

}

#endif
