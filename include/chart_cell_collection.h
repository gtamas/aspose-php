#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef CHART_CELL_COLLECTION_H
#define CHART_CELL_COLLECTION_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    /**
     * @brief Represents collection of a cells with data
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_cell_collection
     * 
     */
    class ChartCellCollection : public AsposeObjectWrapper<IChartCellCollection>, public Collection<IChartCellCollection>, public Php::Base
    {
        public:
            ChartCellCollection(System::SharedPtr<IChartCellCollection> col) : AsposeObjectWrapper<IChartCellCollection>(col), Collection<IChartCellCollection>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();

    };

}

#endif
