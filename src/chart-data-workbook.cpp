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
     * 
     * @param params 
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
