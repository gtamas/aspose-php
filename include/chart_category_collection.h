#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef CHART_CATEGORY_COLLECTION_H
#define CHART_CATEGORY_COLLECTION_H

namespace AsposePhp {

    /**
     * @brief AsposePhp wrapper for ChartCategoryCollection class.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_category_collection
     * 
     */
    class ChartCategoryCollection : public AsposeObjectWrapper<IChartCategoryCollection>, public Collection<IChartCategoryCollection>, public Php::Base
    {
        public:
            ChartCategoryCollection(System::SharedPtr<IChartCategoryCollection> col) : AsposeObjectWrapper<IChartCategoryCollection>(col), Collection<IChartCategoryCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            void RemoveAt(Php::Parameters &params);

    };

}

#endif
