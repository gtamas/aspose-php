<?php
namespace AsposePhp\Slides;

class LineFillFormat
{

    public function set_FillType(int $type)
    {
    }

    public function get_SolidFillColor()
    {
    }


}

namespace AsposePhp\Slides;

class LineFormat
{

    public function get_FillFormat()
    {
    }


}

namespace AsposePhp\Slides;

class ShapeType
{

    public static function get(string $type)
    {
    }


}

namespace AsposePhp\Slides;

class FillType
{

    public static function get(string $type)
    {
    }


}

namespace AsposePhp\Slides;

class PPImage
{

    public function get_Width()
    {
    }

    public function get_Height()
    {
    }

    public function get_ContentType()
    {
    }


}

namespace AsposePhp\Slides;

class ImageCollection
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function AddImage(string $fileOrEncoded, bool $isBase64)
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartDataWorkbook
{

    public function GetCell(int $worksheetIndex, string $row, string $column, string $value)
    {
    }


}

namespace AsposePhp\Slides;

class MasterSlideCollection
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides;

class Column
{

    public function set_Width(int $value)
    {
    }


}

namespace AsposePhp\Slides;

class ColumnCollection
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function RemoveAt(int $index, bool $withAttachedRows)
    {
    }


}

namespace AsposePhp\Slides;

class CellFormat
{

    public function get_FillFormat()
    {
    }


}

namespace AsposePhp\Slides;

class Cell
{

    public function get_TextFrame()
    {
    }

    public function get_CellFormat()
    {
    }

    public function get_RowSpan()
    {
    }

    public function get_ColSpan()
    {
    }

    public function SplitByRowSpan(int $index)
    {
    }

    public function SplitByColSpan(int $index)
    {
    }

    public function get_IsMergedCell()
    {
    }


}

namespace AsposePhp\Slides;

class Row
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function set_MinimalHeight(int $value)
    {
    }


}

namespace AsposePhp\Slides;

class RowCollection
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function RemoveAt(int $index, bool $withAttachedRows)
    {
    }


}

namespace AsposePhp\Slides;

class Connector
{

    public function __construct()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function isGroupShape()
    {
    }

    public function isChart()
    {
    }

    public function isTable()
    {
    }

    public function isAutoShape()
    {
    }

    public function isConnector()
    {
    }

    public function isPictureFrame()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_Name()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }

    public function get_StartShapeConnectedTo()
    {
    }

    public function get_EndShapeConnectedTo()
    {
    }


}

namespace AsposePhp\Slides;

class PictureFrame
{

    public function __construct()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function isGroupShape()
    {
    }

    public function isChart()
    {
    }

    public function isTable()
    {
    }

    public function isAutoShape()
    {
    }

    public function isConnector()
    {
    }

    public function isPictureFrame()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_Name()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

class PortionFormat
{

    public function get_FillFormat()
    {
    }


}

namespace AsposePhp\Slides;

class ColorFormat
{

    public function set_Color()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class FillFormat
{

    public function set_FillType(int $type)
    {
    }

    public function get_SolidFillColor()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class Format
{

    public function get_Fill()
    {
    }

    public function get_Line()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class Marker
{

    public function get_Format()
    {
    }


}

namespace AsposePhp\Slides;

class AutoShape
{

    public function __construct()
    {
    }

    public function isGroupShape()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function isChart()
    {
    }

    public function isTable()
    {
    }

    public function isPictureFrame()
    {
    }

    public function isAutoShape()
    {
    }

    public function isConnector()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_Name()
    {
    }

    public function get_TextFrame()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

class Portion
{

    public function set_Text(string $value)
    {
    }

    public function get_Text()
    {
    }

    public function get_PortionFormat()
    {
    }


}

namespace AsposePhp\Slides;

class PortionCollection
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides;

class Paragraph
{

    public function get_Text()
    {
    }

    public function get_Portions()
    {
    }


}

namespace AsposePhp\Slides;

class ParagraphCollection
{

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides\Util;

class SlideUtil
{

    public static function GetAllTextBoxes(object $slide)
    {
    }


}

namespace AsposePhp\Slides;

class MasterSlide
{


}

namespace AsposePhp\Slides;

class LayoutSlide
{

    public function get_MasterSlide()
    {
    }


}

namespace AsposePhp\Drawing;

class Bitmap
{


}

namespace AsposePhp\Slides;

class SizeF
{

    public function __construct()
    {
    }

    public function get_Width()
    {
    }

    public function get_Height()
    {
    }


}

namespace AsposePhp\Slides;

class SlideSize
{

    public function __construct()
    {
    }

    public function get_Size()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class StringOrDoubleChartValue
{

    public function __construct()
    {
    }

    public function get_AsCell()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class DoubleChartValue
{

    public function __construct()
    {
    }

    public function get_AsCell()
    {
    }

    public function set_Data(string $value)
    {
    }


}

namespace AsposePhp\Slides\Charts;

class DataLabel
{

    public function __construct()
    {
    }

    public function get_TextFrameForOverriding()
    {
    }

    public function GetActualLabelText()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartDataPoint
{

    public function __construct()
    {
    }

    public function get_Label()
    {
    }

    public function get_Value()
    {
    }

    public function get_YValue()
    {
    }

    public function get_XValue()
    {
    }

    public function get_Marker()
    {
    }

    public function Remove()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartDataPointCollection
{

    public function __construct()
    {
    }

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function RemoveAt()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartCellCollection
{

    public function __construct()
    {
    }

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class StringChartValue
{

    public function __construct()
    {
    }

    public function get_AsCells()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartDataCell
{

    public function __construct()
    {
    }

    public function get_Value()
    {
    }

    public function get_Row()
    {
    }

    public function get_Column()
    {
    }

    public function set_CustomNumberFormat(string $value)
    {
    }

    public function set_Value(string $value, string $type)
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartCategory
{

    public function __construct()
    {
    }

    public function get_UseCell()
    {
    }

    public function get_AsCell()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartCategoryCollection
{

    public function __construct()
    {
    }

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function RemoveAt(int $index)
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartSeries
{

    public function __construct()
    {
    }

    public function get_Name()
    {
    }

    public function get_DataPoints()
    {
    }

    public function set_InvertIfNegative(bool $value)
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartSeriesCollection
{

    public function __construct()
    {
    }

    public function idx_get(int $index)
    {
    }

    public function get_Count()
    {
    }

    public function RemoveAt(int $index)
    {
    }


}

namespace AsposePhp\Slides;

class Table
{

    public function __construct()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function isGroupShape()
    {
    }

    public function isChart()
    {
    }

    public function isTable()
    {
    }

    public function isAutoShape()
    {
    }

    public function isPictureFrame()
    {
    }

    public function isConnector()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_Name()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }

    public function MergeCells(?\AsposePhp\Slides\Cell $cell1, ?\AsposePhp\Slides\Cell $cell2, bool $allowSplitting)
    {
    }

    public function get_Rows()
    {
    }

    public function get_Columns()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartData
{

    public function __construct()
    {
    }

    public function get_Series()
    {
    }

    public function get_Categories()
    {
    }

    public function get_ChartDataWorkbook()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class Chart
{

    public function __construct()
    {
    }

    public function get_ChartData()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function isGroupShape()
    {
    }

    public function isAutoShape()
    {
    }

    public function isChart()
    {
    }

    public function isTable()
    {
    }

    public function isConnector()
    {
    }

    public function isPictureFrame()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_Name()
    {
    }

    public function get_Type()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

class GroupShape
{

    public function __construct()
    {
    }

    public function get_Shapes()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function isGroupShape()
    {
    }

    public function isChart()
    {
    }

    public function isAutoShape()
    {
    }

    public function isTable()
    {
    }

    public function isConnector()
    {
    }

    public function isPictureFrame()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_Name()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

class Shape
{

    public function __construct()
    {
    }

    public function isTable()
    {
    }

    public function isChart()
    {
    }

    public function isGroupShape()
    {
    }

    public function isAutoShape()
    {
    }

    public function isPictureFrame()
    {
    }

    public function isConnector()
    {
    }

    public function get_AlternativeText()
    {
    }

    public function get_Name()
    {
    }

    public function get_UniqueId()
    {
    }

    public function get_IsGrouped()
    {
    }

    public function get_ParentGroup()
    {
    }

    public function get_Height()
    {
    }

    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

class ShapeCollection
{

    public function __construct()
    {
    }

    public function ToArray()
    {
    }

    public function Remove()
    {
    }


}

namespace AsposePhp\Slides;

class TextFrame
{

    public function __construct()
    {
    }

    public function get_Text()
    {
    }

    public function set_Text(string $text)
    {
    }

    public function get_Paragraphs()
    {
    }


}

namespace AsposePhp\Slides;

class NotesSlide
{

    public function __construct()
    {
    }

    public function get_NotesTextFrame()
    {
    }


}

namespace AsposePhp\Slides;

class NotesSlideManager
{

    public function __construct()
    {
    }

    public function get_NotesSlide()
    {
    }


}

namespace AsposePhp\Slides;

class SlideText
{

    public function __construct()
    {
    }

    public function get_Text()
    {
    }

    public function get_MasterText()
    {
    }

    public function get_LayoutText()
    {
    }

    public function get_NotesText()
    {
    }


}

namespace AsposePhp\Slides;

class PresentationFactory
{

    public function __construct()
    {
    }

    public function GetPresentationText(string $path)
    {
    }


}

namespace AsposePhp\Slides;

class PresentationText
{

    public function __construct()
    {
    }

    public function get_SlidesText()
    {
    }


}

namespace AsposePhp\Slides;

class ISlideCollection
{

    public function size()
    {
    }

    public function get_Item()
    {
    }

    public function AddClone(?\AsposePhp\Slides\Slide $slide)
    {
    }


}

namespace AsposePhp;

class AsposeUtil
{

    public static function getVersion()
    {
    }


}

namespace AsposePhp\Slides;

class Slide
{

    public function GetThumbnail(float $scaleX, float $scaleY, string $format, bool $asArray)
    {
    }

    public function get_LayoutSlide()
    {
    }

    public function get_Shapes()
    {
    }

    public function getSlideNumber()
    {
    }

    public function getSlideText()
    {
    }

    public function getLayoutText()
    {
    }

    public function getMasterText()
    {
    }

    public function getNotesText()
    {
    }

    public function get_NotesSlideManager()
    {
    }

    public function Remove()
    {
    }


}

namespace AsposePhp\Slides;

class Presentation
{

    public function load(string $path)
    {
    }

    public function __construct(string $path = null, string $licensePath = null)
    {
    }

    public function getPresentationText(string $path, string $type, bool $arranged = null)
    {
    }

    public function getNumberOfSlides()
    {
    }

    public function getSlides()
    {
    }

    public function getSlide(int $slideNo)
    {
    }

    public function save(string $outfile, string $format, bool $asArray)
    {
    }

    public function cloneSlide(int $outfile)
    {
    }

    public function get_SlideSize()
    {
    }

    public function get_Masters()
    {
    }

    public function get_Images()
    {
    }


}

class PhpCpp::Functor
{


}

