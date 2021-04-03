#include "../include/aspose.h"
#include "../include/chart_data.h"
#include "../include/collection.h"
#include "../include/chart_data_point_collection.h"
#include "../include/chart_data_point.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the series collection from chart data. 
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point_collection#a103c742914cfd0898a5bdeb0dd1c328e
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the item to get
     * @throw System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return Php::Value 
     */
    Php::Value ChartDataPointCollection::idx_get(Php::Parameters &params)
    {
        int index = params[0].numericValue();
        try
        {
            SharedPtr<IChartDataPoint> obj = _asposeObj->idx_get(index);
            ChartDataPoint *phpValue = new ChartDataPoint(obj);
            return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataPoint", phpValue);
        }
        catch (System::ArgumentOutOfRangeException &e)
        {
            throw Php::Exception("Invalid index: " + to_string(index));
        }
    }

    /**
     * @brief Returns the number of items in collection.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point_collection#a660afc6a471068abef78034cb44a1c08
     * 
     * @return Php::Value 
     */
    Php::Value ChartDataPointCollection::get_Count()
    {
        return Collection::get_Count();
    }

    /**
     * @brief Removes the element at the given index
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_point_collection#affeaaa7f7b2029878b9a3c9886b34d19
     * @param params Php::Parameters
     * @param params[0] index int The index to remove
     * @param int idx The index of th element to remove. 
     */
    void ChartDataPointCollection::RemoveAt(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->RemoveAt(index);
    }

}
