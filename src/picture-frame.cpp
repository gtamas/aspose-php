#include "../include/aspose.h"
#include "../include/picture-frame.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;
using namespace System;

namespace AsposePhp
{

    Php::Value PictureFrame::isGroupShape()
    {
        return Shape::isGroupShape();
    }

    Php::Value PictureFrame::isChart()
    {
        return Shape::isChart();
    }

    Php::Value PictureFrame::isPictureFrame()
    {
        return true;
    }

    Php::Value PictureFrame::isAutoShape()
    {
        return Shape::isAutoShape();
    }

    Php::Value PictureFrame::isTable()
    {
        return Shape::isTable();
    }

    Php::Value PictureFrame::isConnector()
    {
        return Shape::isConnector();
    }

    Php::Value PictureFrame::get_Height()
    {
        return Shape::get_Height();
    }

    Php::Value PictureFrame::get_Width()
    {
        return Shape::get_Width();
    }

    Php::Value PictureFrame::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    Php::Value PictureFrame::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    Php::Value PictureFrame::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    Php::Value PictureFrame::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    Php::Value PictureFrame::get_Name()
    {
        return Shape::get_Name();
    }

} // namespace AsposePhp
