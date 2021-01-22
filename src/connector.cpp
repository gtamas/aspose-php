#include "../include/aspose.h"
#include "../include/connector.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace std;
using namespace System;

namespace AsposePhp
{

    Php::Value Connector::isGroupShape()
    {
        return Shape::isGroupShape();
    }

    Php::Value Connector::isChart()
    {
        return Shape::isChart();
    }

    Php::Value Connector::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

    Php::Value Connector::isAutoShape()
    {
        return Shape::isAutoShape();
    }

    Php::Value Connector::isTable()
    {
        return Shape::isTable();
    }

    Php::Value Connector::isConnector()
    {
        return true;
    }

    Php::Value Connector::get_Height()
    {
        return Shape::get_Height();
    }

    Php::Value Connector::get_Width()
    {
        return Shape::get_Width();
    }

    Php::Value Connector::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    Php::Value Connector::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    Php::Value Connector::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    Php::Value Connector::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    Php::Value Connector::get_Name()
    {
        return Shape::get_Name();
    }

} // namespace AsposePhp
