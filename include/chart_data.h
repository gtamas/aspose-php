#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CHART_DATA_H
#define CHART_DATA_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class ChartData : public AsposeObjectWrapper<IChartData>, public Php::Base
    {
        public:
            ChartData(System::SharedPtr<IChartData> shape) : AsposeObjectWrapper<IChartData>(shape) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Series();
            Php::Value get_Categories();

    };

}

#endif
