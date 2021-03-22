#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CHART_SERIES_H
#define CHART_SERIES_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class ChartSeries : public AsposeObjectWrapper<IChartSeries>, public Php::Base
    {
        public:
            ChartSeries(System::SharedPtr<IChartSeries> series) : AsposeObjectWrapper<IChartSeries>(series) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Name();
            Php::Value get_DataPoints();
            Php::Value get_Format();
            Php::Value get_Marker();
            void set_InvertIfNegative(Php::Parameters &params);

    };

}

#endif
