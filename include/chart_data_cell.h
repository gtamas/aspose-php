#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include <iostream>
#include <typeinfo>

#ifndef CHART_DATA_CELL_H
#define CHART_DATA_CELL_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class ChartDataCell : public AsposeObjectWrapper<IChartDataCell>, public Php::Base
    {
        public:
            ChartDataCell(System::SharedPtr<IChartDataCell> cell) : AsposeObjectWrapper<IChartDataCell>(cell) {};
            void __construct(Php::Parameters &params);
            Php::Value get_Value();
            Php::Value get_Row();
            void set_CustomNumberFormat(Php::Parameters &params);
            void set_Value(Php::Parameters &params);

    };

}

#endif
