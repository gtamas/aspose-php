#include "../include/aspose.h"
#include "../include/auto-shape.h"
#include "../include/text_frame.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;
using namespace System;

namespace AsposePhp
{

    Php::Value AutoShape::isGroupShape()
    {
        return Shape::isGroupShape();
    }

    Php::Value AutoShape::isChart()
    {
        return Shape::isChart();
    }

    Php::Value AutoShape::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

    Php::Value AutoShape::isTable()
    {
        return Shape::isTable();
    }

    Php::Value AutoShape::isAutoShape()
    {
        return true;
    }

    Php::Value AutoShape::isConnector()
    {
        return Shape::isConnector();
    }

    Php::Value AutoShape::get_Height()
    {
        return Shape::get_Height();
    }

    Php::Value AutoShape::get_Width()
    {
        return Shape::get_Width();
    }

    Php::Value AutoShape::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    Php::Value AutoShape::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    Php::Value AutoShape::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    Php::Value AutoShape::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    Php::Value AutoShape::get_FillFormat()
    {
        return Shape::get_FillFormat();
    }

    Php::Value AutoShape::get_Name()
    {
        return Shape::get_Name();
    }

    Php::Value AutoShape::get_TextFrame()
    {
        SharedPtr<ITextFrame> frame = AsposeObjectWrapper<IAutoShape>::_asposeObj->get_TextFrame();
        TextFrame *phpValue = new TextFrame(frame);
        return Php::Object("AsposePhp\\Slides\\TextFrame", phpValue);
    }

} // namespace AsposePhp
