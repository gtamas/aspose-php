#include "../include/aspose.h"
#include "../include/chart-data-workbook.h"
#include "../include/chart_data_cell.h"
#include <phpcpp.h>

using namespace Aspose::Slides::Charts;
using namespace System;

using namespace std;

namespace AsposePhp {

 
    /**
     * @brief Gets the cell that can be used for chart series or categories
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.charts.chart_data_workbook#a7f21730e975a92bf5c85fe1e8320e3ce
     * 
     * @param params Php::Parameters params 
     * @param params[0] int worksheetIndex Index of the worksheet 
     * @param params[1] int row	The row 
     * @param params[2] int column	The column 
     * @param params[3] string value	The value 
     * @return Php::Value 
     */
    Php::Value ChartDataWorkbook::GetCell(Php::Parameters &params) {
        int32_t worksheetIndex = params[0].numericValue();
        int32_t row = params[1].numericValue();
        int32_t column = params[2].numericValue();
        std::string value = params[3].stringValue();
        SharedPtr<IChartDataCell> cell = _asposeObj->GetCell(worksheetIndex, row, column, System::ObjectExt::Box<String>(String(value)));
        ChartDataCell * phpValue = new ChartDataCell(cell);
        return Php::Object("AsposePhp\\Slides\\Charts\\ChartDataCell", phpValue);
    }
 

}
