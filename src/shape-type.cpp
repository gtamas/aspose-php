#include "../include/aspose.h"
#include "../include/shape-type.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    //TODO: not complete! Must add the rest of Aspose::Slides::ShapeType.

    /**
     * @brief Returns the given shape type or null if doesn't exist.
     * 
     * @return Php::Value 
     */
    Php::Value ShapeType::get(Php::Parameters &params)
    {
        string type = String(params[0].stringValue()).ToLower().ToUtf8String();

        if (type == "custom")
        {
            return (int8_t)Aspose::Slides::ShapeType::Custom;
        }
        else if (type == "notdefined")
        {
            return (int8_t)Aspose::Slides::ShapeType::NotDefined;
        }
        else if (type == "line")
        {
            return (int8_t)Aspose::Slides::ShapeType::Line;
        }
        else if (type == "lineInverse")
        {
            return (int8_t)Aspose::Slides::ShapeType::LineInverse;
        }
        else if (type == "triangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::Triangle;
        }
        else if (type == "righttriangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::RightTriangle;
        }
        else if (type == "rectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::Rectangle;
        }
        else if (type == "diamond")
        {
            return (int8_t)Aspose::Slides::ShapeType::Diamond;
        }
        else if (type == "parallelogram")
        {
            return (int8_t)Aspose::Slides::ShapeType::Parallelogram;
        }
        else if (type == "trapezoid")
        {
            return (int8_t)Aspose::Slides::ShapeType::Trapezoid;
        }
        else if (type == "nonIsoscelestrapezoid")
        {
            return (int8_t)Aspose::Slides::ShapeType::NonIsoscelesTrapezoid;
        }
        else if (type == "pentagon")
        {
            return (int8_t)Aspose::Slides::ShapeType::Pentagon;
        }
        else if (type == "hexagon")
        {
            return (int8_t)Aspose::Slides::ShapeType::Hexagon;
        }
        else if (type == "heptagon")
        {
            return (int8_t)Aspose::Slides::ShapeType::Heptagon;
        }
        else if (type == "octagon")
        {
            return (int8_t)Aspose::Slides::ShapeType::Octagon;
        }
        else if (type == "decagon")
        {
            return (int8_t)Aspose::Slides::ShapeType::Decagon;
        }
        else if (type == "dodecagon")
        {
            return (int8_t)Aspose::Slides::ShapeType::Dodecagon;
        }
        else if (type == "fourpointedftar")
        {
            return (int8_t)Aspose::Slides::ShapeType::FourPointedStar;
        }
        else if (type == "fivepointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::FivePointedStar;
        }
        else if (type == "sixpointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::SixPointedStar;
        }
        else if (type == "sevenpointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::SevenPointedStar;
        }
        else if (type == "eightpointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::EightPointedStar;
        }
        else if (type == "tenpointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::TenPointedStar;
        }
        else if (type == "twelvepointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::TwelvePointedStar;
        }
        else if (type == "sixteenpointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::SixteenPointedStar;
        }
        else if (type == "twentyfourpointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::TwentyFourPointedStar;
        }
        else if (type == "thirtytwopointedstar")
        {
            return (int8_t)Aspose::Slides::ShapeType::ThirtyTwoPointedStar;
        }
        else if (type == "roundcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::RoundCornerRectangle;
        }
        else if (type == "oneroundcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::OneRoundCornerRectangle;
        }
        else if (type == "twosamesideroundcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::TwoSamesideRoundCornerRectangle;
        }
        else if (type == "onesniponeroundcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::OneSnipOneRoundCornerRectangle;
        }
        else if (type == "onesnipcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::OneSnipCornerRectangle;
        }
        else if (type == "twosamesidesnipcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::TwoSamesideSnipCornerRectangle;
        }
        else if (type == "twodiagonalsnipcornerrectangle")
        {
            return (int8_t)Aspose::Slides::ShapeType::TwoDiagonalSnipCornerRectangle;
        }
        else if (type == "plaque")
        {
            return (int8_t)Aspose::Slides::ShapeType::Plaque;
        }
        else if (type == "ellipse")
        {
            return (int8_t)Aspose::Slides::ShapeType::Ellipse;
        }
        else if (type == "teardrop")
        {
            return (int8_t)Aspose::Slides::ShapeType::Teardrop;
        }
        else if (type == "homeplate")
        {
            return (int8_t)Aspose::Slides::ShapeType::HomePlate;
        }
        else if (type == "chevron")
        {
            return (int8_t)Aspose::Slides::ShapeType::Chevron;
        }
        else if (type == "piewedge")
        {
            return (int8_t)Aspose::Slides::ShapeType::PieWedge;
        }
        else if (type == "pie")
        {
            return (int8_t)Aspose::Slides::ShapeType::Pie;
        }
        else if (type == "blockarc")
        {
            return (int8_t)Aspose::Slides::ShapeType::BlockArc;
        }
        else if (type == "donut")
        {
            return (int8_t)Aspose::Slides::ShapeType::Donut;
        }
        else if (type == "nosmoking")
        {
            return (int8_t)Aspose::Slides::ShapeType::NoSmoking;
        }
        else if (type == "rightarrow")
        {
            return (int8_t)Aspose::Slides::ShapeType::RightArrow;
        }

        return nullptr;
    }

} // namespace AsposePhp
