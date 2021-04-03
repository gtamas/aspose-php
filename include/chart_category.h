#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

using namespace Aspose::Slides::Charts;

#ifndef CHART_CATEGORY_H
#define CHART_CATEGORY_H

namespace AsposePhp {

    /**
     * @brief Represents chart categories
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_category
     * 
     */
    class ChartCategory : public AsposeObjectWrapper<IChartCategory>, public Php::Base
    {
        public:
            ChartCategory(System::SharedPtr<IChartCategory> series) : AsposeObjectWrapper<IChartCategory>(series) {};
            void __construct(Php::Parameters &params);
            Php::Value get_UseCell();
            Php::Value get_AsCell();

    };

}

#endif
