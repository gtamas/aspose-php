#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/chart_series_collection.h"
#include "../include/chart_category_collection.h"
#include "../include/chart-data-workbook.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the series collection from chart data. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data#afc935a1e9a6d37a8d876cfb527f659e8
     * 
     * @return Php::Value 
     */
    Php::Value ChartData::get_Series()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartSeriesCollection", wrapObject<IChartSeriesCollection, AsposePhp::ChartSeriesCollection, &IChartData::get_Series>());
    }

    /**
     * @brief Returns categories collection.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data#a877fdf0889737029dc0f993979998ff1
     * 
     * @return Php::Value 
     */
    Php::Value ChartData::get_Categories()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartCategoryCollection", wrapObject<IChartCategoryCollection, AsposePhp::ChartCategoryCollection, &IChartData::get_Categories>());
    }


    /**
     * @brief Gets the cells factory to create cells used for chart series or categories. Read-only IChartDataWorkbook
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data#a32097093561723a10df0a57dc91acaea
     * 
     * @return Php::Value 
     */
    Php::Value ChartData::get_ChartDataWorkbook()
    {
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataWorkbook ", wrapObject<IChartDataWorkbook, AsposePhp::ChartDataWorkbook, &IChartData::get_ChartDataWorkbook>());
    }

} // namespace AsposePhp
