#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/collection.h"
#include "../include/chart_category_collection.h"
#include "../include/chart_category.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the series collection from chart data. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_category_collection#a76f150486cefc3b0e33b161d365f0ca7
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ChartCategoryCollection::idx_get(Php::Parameters &params)
    {
        int index = params[0].numericValue();
        try
        {
            return Php::Object("AsposePhp\\Slides\\Charts\\ChartCategory", wrapObject<IChartCategory, AsposePhp::ChartCategory, &IChartCategoryCollection::idx_get>(index));
        }
        catch (System::ArgumentOutOfRangeException &e)
        {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in the collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_category_collection#a52747af2adb5b8a52b49e8f244911d02
     * 
     * @return Php::Value 
     */
    Php::Value ChartCategoryCollection::get_Count()
    {
        return Collection::get_Count();
    }

    /**
     * @brief Removes the element at the given index
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_category_collection#a672b7f310cdf37ea1a9116598765333f
     * @param params Php::Parameters
     * @param params[0] int index the elemnt to remove
     * 
     * @return Php::Value 
     */
    void ChartCategoryCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->RemoveAt(index);
    }

} // namespace AsposePhp
