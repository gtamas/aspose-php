#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef CHART_SERIES_COLLECTION_H
#define CHART_SERIES_COLLECTION_H

namespace AsposePhp {

    class ChartSeriesCollection : public AsposeObjectWrapper<IChartSeriesCollection>, public Collection<IChartSeriesCollection>, public Php::Base
    {
        public:
            ChartSeriesCollection(System::SharedPtr<IChartSeriesCollection> col) : AsposeObjectWrapper<IChartSeriesCollection>(col), Collection<IChartSeriesCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();

    };

}

#endif
