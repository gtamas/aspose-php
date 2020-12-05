#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef CHART_DATA_POINT_COLLECTION_H
#define CHART_DATA_POINT_COLLECTION_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class ChartDataPointCollection : public AsposeObjectWrapper<IChartDataPointCollection>, public Collection<IChartDataPointCollection>, public Php::Base
    {
        public:
            ChartDataPointCollection(System::SharedPtr<IChartDataPointCollection> col) : AsposeObjectWrapper<IChartDataPointCollection>(col), Collection<IChartDataPointCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();

    };

}

#endif
