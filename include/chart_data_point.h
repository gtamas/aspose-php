#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

using namespace Aspose::Slides::Charts;

#ifndef CHART_DATA_POINT_H
#define CHART_DATA_POINT_H

namespace AsposePhp {

    class ChartDataPoint : public AsposeObjectWrapper<IChartDataPoint>, public Php::Base
    {
        public:
            ChartDataPoint(System::SharedPtr<IChartDataPoint> series) : AsposeObjectWrapper<IChartDataPoint>(series) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Label();
            Php::Value get_Value();
            Php::Value get_XValue();
            Php::Value get_YValue();
            Php::Value get_Marker();
            void Remove();

    };

}

#endif
