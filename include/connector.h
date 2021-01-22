#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"
#include "../include/shape.h"

#ifndef CONNECTOR_H
#define CONNECTOR_H

using namespace Aspose::Slides;

namespace AsposePhp {

    class Connector : virtual AsposeObjectWrapper<IConnector>,  public Shape
    {
        public:
            Connector(System::SharedPtr<IConnector> obj) : AsposeObjectWrapper<IConnector>(obj), Shape(obj)  {};
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
