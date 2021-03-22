#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef CHART_H
#define CHART_H

using namespace Aspose::Slides::Charts;

namespace AsposePhp {

    class Chart : public AsposeObjectWrapper<IChart>, public AsposePhp::Shape
    {
        public:
            Chart(System::SharedPtr<IChart> shape) : AsposeObjectWrapper<IChart>(shape), Shape(shape) {
            };
            void __construct(Php::Parameters &params);
            Php::Value isGroupShape();
            Php::Value isAutoShape();
            Php::Value isPictureFrame();
            Php::Value isTable();
            Php::Value isChart();
            Php::Value isConnector();
            Php::Value get_ChartData();
            Php::Value get_AlternativeText();
            Php::Value get_UniqueId();
            Php::Value get_FillFormat();
            Php::Value get_Name();
            Php::Value get_Type();
            Php::Value get_IsGrouped();
            Php::Value get_ParentGroup();
            Php::Value get_Height();
            Php::Value get_Width();
    
    };

}

#endif
