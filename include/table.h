#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef TABLE_H
#define TABLE_H

namespace AsposePhp {

    class Table : public AsposeObjectWrapper<ITable>, public Shape
    {
        public:
            Table(System::SharedPtr<ITable> shape) : AsposeObjectWrapper<ITable>(shape), Shape(shape) {};
            void __construct(Php::Parameters &params);
            Php::Value isGroupShape();
            Php::Value isTable();
            Php::Value isChart();
            Php::Value isAutoShape();
            Php::Value isPictureFrame();
            Php::Value isConnector();
            Php::Value get_UniqueId();
            Php::Value get_Name();
            Php::Value get_AlternativeText();
            Php::Value get_IsGrouped();
            Php::Value get_ParentGroup();
            Php::Value get_Height();
            Php::Value get_Width();
            Php::Value MergeCells(Php::Parameters &params);
            Php::Value get_Rows();
            Php::Value get_Columns();

    };

}

#endif
