#include "../include/aspose.h"
#include "../include/table.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    Php::Value Table::isGroupShape() {
        return Shape::isGroupShape();
    }

    Php::Value Table::isChart() {
        return Shape::isChart();
    }

    Php::Value Table::isTable() {
        return true;
    }

    Php::Value Table::get_AlternativeText() {
        return Shape::get_AlternativeText();
    }



}
