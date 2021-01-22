#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef AUTOSHAPE_H
#define AUTOSHAPE_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class AutoShape : virtual AsposeObjectWrapper<IAutoShape>,  public Shape
    {
        public:
            AutoShape(System::SharedPtr<IAutoShape> obj) : AsposeObjectWrapper<IAutoShape>(obj), Shape(obj)  {};
            void __construct(Php::Parameters &params);
            Php::Value isGroupShape();
            Php::Value isTable();
            Php::Value isChart();
            Php::Value isAutoShape();
            Php::Value isPictureFrame();
            Php::Value isConnector();
            Php::Value get_UniqueId();
            Php::Value get_Name();
            Php::Value get_TextFrame();
            Php::Value get_AlternativeText();
            Php::Value get_IsGrouped();
            Php::Value get_ParentGroup();
            Php::Value get_Height();
            Php::Value get_Width();
            

    };

}

#endif
