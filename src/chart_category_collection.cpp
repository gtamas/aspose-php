#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/collection.h"
#include "../include/chart_category_collection.h"
#include "../include/chart_category.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {

    /**
     * @brief Returns the series collection from chart data. 
     * 
     * @return Php::Value 
     */
    Php::Value ChartCategoryCollection::idx_get(Php::Parameters &params) {
        int index = params[0].numericValue();
        return Php::Object("ChartCategory", wrapObject<IChartCategory, AsposePhp::ChartCategory, &IChartCategoryCollection::idx_get>(index));
    }

    /**
     * @brief Returns the number of items in the collection
     * 
     * @return Php::Value 
     */
    Php::Value ChartCategoryCollection::get_Count() {
        return Collection::get_Count();
    }

}
