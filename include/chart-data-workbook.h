#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef CHARTDATAWORKBOOK_H
#define CHARTDATAWORKBOOK_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class ChartDataWorkbook : public AsposeObjectWrapper<IChartDataWorkbook>, public Php::Base
    {
        public:
            ChartDataWorkbook(System::SharedPtr<IChartDataWorkbook> obj) : AsposeObjectWrapper<IChartDataWorkbook>(obj) {};
            void __construct(Php::Parameters &params);
             
            Php::Value GetCell(Php::Parameters &params);
            

    };

}

#endif
