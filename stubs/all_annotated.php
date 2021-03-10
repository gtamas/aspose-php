<?php
namespace AsposePhp\Slides;

/**
 * Represents properties for lines filling
 */
class LineFillFormat
{

    /**
     * Sets the fill type. 
     * @link https://apireference.aspose.com/slides/cpp/class/aspose.slides.line_fill_format
     * 
     * @param int $type The fill type. It's an enum See https://apireference.aspose.com/slides/cpp/namespace/aspose.slides#a73f3a585b379b3df191d07931378e40a
     * @return void
     */
    public function set_FillType(int $type): void
    {
    }


    /**
     * Returns the color of a solid fill 
     * https://apireference.aspose.com/slides/cpp/class/aspose.slides.line_fill_format
     * 
     * @param int $type The fill type. It's an enum See https://apireference.aspose.com/slides/cpp/namespace/aspose.slides#a73f3a585b379b3df191d07931378e40a
     * @return AsposePhp\Slides\ColorFormat
     */
    public function get_SolidFillColor(): AsposePhp\Slides\ColorFormat
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents format of a line
 */
class LineFormat
{

     /**
     * Returns the fill format of a line
     * @link https://apireference.aspose.com/slides/cpp/class/aspose.slides.line_format
     * 
     * Not implemented.
     * 
     * @return null
     */
    public function get_FillFormat()
    {
    }


}

namespace AsposePhp\Slides;

class ShapeType
{


    /**
     * Returns the given shape type or null if doesn't exist 
     * 
     * @param string $type The types to return. It's an enum. See Aspose::Slides::ShapeType
     * @return int
     */
    public static function get(string $type): int
    {
    }


}

namespace AsposePhp\Slides;

class FillType
{

     /**
     * Returns the given fill type or null if doesn't exist.
     * 
     * @param string $type The types to return. It's an enum. See Aspose::Slides::FillType
     * @return int
     */
    public static function get(string $type): int
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents an image in a presentation
 */
class PPImage
{


    /**
     * Returns width of an image. Read-only int32_t.
     * 
     * @return int
     */
    public function get_Width(): int
    {
    }

    /**
     * Returns height of an image. Read-only int32_t.
     * 
     * @return int
     */
    public function get_Height(): int
    {
    }

    /**
     * Returns a MIME type of an image as string.
     * 
     * @return string
     */
    public function get_ContentType(): string
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents collection of PPImage
 */
class ImageCollection
{

    /**
     * Returns the image the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\PPImage
     */
    public function idx_get(int $index)
    {
    }

     /**
     * Returns the number of images in collection.
     * 
     * @return int
     */
    public function get_Count()
    {
    }

    /**
     * Add an image to a presentation.
     * 
     * @param string $fileOrEncoded the image to add. Path or base64 encoded string.
     * @param bool $isBase64 the is this base64 encoded input.
     * @return AsposePhp\Slides\PPImage
     */
    public function AddImage(string $fileOrEncoded, bool $isBase64)
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Provides access to embedded Excel workbook
 */
class ChartDataWorkbook
{

    public function GetCell(int $worksheetIndex, string $row, string $column, string $value)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a collection of master slides
 */
class MasterSlideCollection
{

    /**
     * Returns the master slide the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\MasterSlide
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a column in a table
 */
class Column
{

    /**
     * Sets the width of a column.
     * @param int $value The width.
     * @return void
     */
    public function set_Width(int $value)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents collection of columns in a table
 */
class ColumnCollection
{

    /**
     * Returns the column the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\Column
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count()
    {
    }

    /**
     * Removes a column at the specified position from a table
     * 
     * @param int $index The index to remove.
     * @param bool $withAttachedRows Remove attached rows as well or not.
     * @return void
     */
    public function RemoveAt(int $index, bool $withAttachedRows)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents format of a table cell
 */
class CellFormat
{

    /**
     * Not implemented
     */
    public function get_FillFormat()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents table cell
 */
class Cell
{

    /**
     * Returns the text frame of a cell. Read-only ITextFrame
     * 
     * @return AsposePhp\Slides\TextFrame 
     */
    public function get_TextFrame()
    {
    }

    /**
     * Returns the CellFormat object that contains formatting properties for this cell. Read-only ICellFormat
     * 
     * @return AsposePhp\Slides\CellFormat 
     */
    public function get_CellFormat()
    {
    }

    /**
     * Returns the number of rows that a merged cell spans. This is used in combination with the vMerge attribute on other cells in order to specify the beginning cell of a horizontal merge. Read-only int32_t
     * 
     * @return int 
     */
    public function get_RowSpan()
    {
    }

     /**
     * Returns the number of grid columns in the parent table's table grid which shall be spanned by the current cell. This property allows cells to have the appearance of being merged, as they span vertical boundaries of other cells in the table. Read-only int32_t.
     * 
     * @return int 
     */
    public function get_ColSpan()
    {
    }

    /**
     * Splits the cell to two cells by index of row
     * 
     * @param int $index The index to split by 
     * @return void 
     */
    public function SplitByRowSpan(int $index)
    {
    }

    /**
     *  Splits the cell to two cells by index of column
     * 
     * @param int $index The index to split by 
     * @return void 
     */
    public function SplitByColSpan(int $index)
    {
    }

    /**
     * Is this a merged cell?
     * 
     * @return bool 
     */
    public function get_IsMergedCell()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a table row
 */
class Row
{

     /**
     * Returns the cell the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\Cell
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count()
    {
    }

     /**
     * Sets the minimal possible height of a row.
     * 
     * @param int $index The new height value.
     * @return void
     */
    public function set_MinimalHeight(int $value)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents table row collection
 */
class RowCollection
{

    /**
     * Returns the row the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\Cell
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count()
    {
    }

    /**
     * Removes a row at the specified position from a table
     * 
     * @param int $index The index.
     * @param bool $withAttachedRows Remove attached rows too or not.
     * @return void
     */
    public function RemoveAt(int $index, bool $withAttachedRows)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a connector
 */
class Connector
{

    /**
     * PHP Constructor
     * 
     */
    public function __construct()
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

    /**
     * Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isGroupShape()
    {
    }

    /**
     * Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isChart()
    {
    }

    /**
     * Returns true if shape is a table, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isTable()
    {
    }

    /**
     * Returns true if shape is AutoShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isAutoShape()
    {
    }

    /**
     * Returns true if shape is a connector, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isConnector()
    {
    }

    /**
     * Returns true if shape is PictureFrame, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isPictureFrame()
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }

    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }

    /**
     * Returns the shape to attach the beginning of the connector to. Read IShape.
     * 
     * @return AsposePhp\Slides\Shape 
     */
    public function get_StartShapeConnectedTo()
    {
    }


    /**
     * Returns the shape to attach the end of the connector to. Read IShape.
     * 
     * @return AsposePhp\Slides\Shape 
     */
    public function get_EndShapeConnectedTo()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a frame with a picture inside
 */
class PictureFrame
{

    /**
     * PHP Constructor
     * 
     */
    public function __construct()
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

     /**
     * Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isGroupShape()
    {
    }

     /**
     * Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isChart()
    {
    }

     /**
     * Returns true if shape is Table, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isTable()
    {
    }

     /**
     * Returns true if shape is AutoShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isAutoShape()
    {
    }

     /**
     * Returns true if shape is Connector, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isConnector()
    {
    }

     /**
     * Returns true if shape is PictureFrame. Always true.
     * 
     * @return bool 
     */
    public function isPictureFrame()
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }

    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * This class contains the text portion formatting properties
 */
class PortionFormat
{

    /**
     * Returns the text FillFormat properties. No inheritance applied
     * 
     * @return AsposePhp\Slides\Charts\FillFormat 
     */
    public function get_FillFormat()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a color used in a presentation
 */
class ColorFormat
{

    /**
     * Returns the text FillFormat properties. No inheritance applied
     * 
     * @param string $color A hex color code
     * @return void 
     */
    public function set_Color(string $color)
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents a fill formatting options
 */
class FillFormat
{

    /**
     * Sets the type of filling
     * 
     * @param int $type The fill type. See Aspose::Slides::FillType 
     * @param params 
     */
    public function set_FillType(int $type)
    {
    }


    /**
     * @brief Returns the fill color.
     * 
     * @return AsposePhp\Slides\ColorFormat 
     */
    public function get_SolidFillColor()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents chart format properties
 */
class Format
{

    /**
     * Returns fill style properties of a chart
     * 
     * @return AsposePhp\Slides\Charts\FillFormat 
     */
    public function get_Fill()
    {
    }

    /**
     * @brief Returns line style properties of a chart
     * 
     * @return AsposePhp\Slides\LineFormat
     */
    public function get_Line()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents marker of a chert
 */
class Marker
{

    /**
     * @brief Gets the marker fill
     * 
     * @return AsposePhp\Slides\Charts\Format 
     */
    public function get_Format()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents an AutoShape
 */
class AutoShape
{

     /**
     * PHP Constructor
     * 
     */
    public function __construct()
    {
    }

    /**
     * Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isGroupShape()
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

      /**
     * Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isChart()
    {
    }

    /**
     * Returns true if shape is Table, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isTable()
    {
    }

    /**
     * Returns true if shape is PictureFrame, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isPictureFrame()
    {
    }


    /**
     * Returns true if shape is AutoShape. This is always true.
     * 
     * @return bool 
     */
    public function isAutoShape()
    {
    }


    /**
     * Returns true if shape is Connector, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isConnector()
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

     /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }

    /**
     * Returns the text frame from this shape
     * 
     * @return AsposePhp\Slides\TextFrame
     */
    public function get_TextFrame()
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

      /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }

    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a portion of text inside a text paragraph
 */
class Portion
{

    /**
     * Sets the plain text of a portion. Write System::String
     * 
     * @param string $value The text.
     * @param params 
     */
    public function set_Text(string $value)
    {
    }

     /**
     * Gets the plain text of a portion.
     * 
     * @return string 
     */
    public function get_Text()
    {
    }

    /**
     * Returns formatting object which contains explicitly set formatting properties of the text portion with no inheritance applied.
     * 
     * @return AsposePhp\Slides\PortionFormat 
     */
    public function get_PortionFormat()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a collection of portions
 */
class PortionCollection
{

    /**
     * Returns the portion the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\Portion
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides;


/**
 * Represents a paragraph of a text
 */
class Paragraph
{

    /**
     * @brief Gets the the plain text of a paragraph
     * 
     * @return string 
     */
    public function get_Text()
    {
    }

    /**
     * @brief Returns the collection of a text portions
     * 
     * @return AsposePhp\Slides\PortionCollection 
     */
    public function get_Portions()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a collection of a paragraphs
 */
class ParagraphCollection
{

     /**
     * Returns the paragraph the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\Portion
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides\Util;

class SlideUtil
{

    /**
     *  Returns all textboxes from slide as array of text frames.
     * 
     * @param object $slide The normal, master, layout or notes slide.
     * 
     * @return array
     */
    public static function GetAllTextBoxes(object $slide)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a master slide in a presentation
 */
class MasterSlide
{


}

namespace AsposePhp\Slides;

/**
 * Represents a layout slide
 */
class LayoutSlide
{

    /**
     *  Returns the master slide for a layout.  
     * 
     * @return AsposePhp\Slides\MasterSlide 
     */
    public function get_MasterSlide()
    {
    }


}

namespace AsposePhp\Drawing;

/**
 * Represents an image
 */
class Bitmap
{


}

namespace AsposePhp\Slides;

class SizeF
{

    /**
     * PHP Constructor
     */
    public function __construct()
    {
    }

     /**
     * Returns the value of width represented by the current object.  
     * 
     * @return float 
     */
    public function get_Width()
    {
    }

    /**
     * Returns the value of height represented by the current object.  
     * 
     * @return float 
     */
    public function get_Height()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a size of slide
 */
class SlideSize
{

    /**
     * PHP Constructor
     */
    public function __construct()
    {
    }

    /**
     *  Returns the size in points.  
     * 
     * @return AsposePhp\Slides\SizeF 
     */
    public function get_Size()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represent string or double value which can be stored in pptx presentation document in two ways: 1) in cell/cells of workbook related to chart; 2) as literal value
 */
class StringOrDoubleChartValue
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }


    /**
     * Returns chart data cell
     * 
     * @return AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function get_AsCell()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represent double value which can be stored in pptx presentation document in two ways: 1) in cell/cells of workbook related to chart; 2) as literal value
 */
class DoubleChartValue
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * Returns chart data cell. 
     * 
     * @return AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function get_AsCell()
    {
    }


    /**
     * @brief Sets data
     * 
     * @param string $value The new value
     * @return void
     */
    public function set_Data(string $value)
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents a series labels
 */
class DataLabel
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * Can contain a rich formatted text. If this property is not null then this formatted text value overrides auto-generated text of data label. Auto-generated text of data label means text that is managed by ShowSeriesName, ShowValue, ... properties and is formatted with the TextFormatManager.TextFormat property.
     * 
     * @return AsposePhp\Slides\TextFrame 
     */
    public function get_TextFrameForOverriding()
    {
    }

    /**
     * Returns actual label text based on DataLabelFormat settings or TextFrameForOverriding.Text value
     * 
     * @return string 
     */
    public function GetActualLabelText()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents series data point
 */
class ChartDataPoint
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Represents the label of chart data point
     * 
     * @return AsposePhp\Slides\Charts\DataLabel 
     */
    public function get_Label()
    {
    }

    /**
     * Returns the value of chart data point
     * 
     * @return AsposePhp\Slides\Charts\DoubleChartValue 
     */
    public function get_Value()
    {
    }

    /**
     * Returns the y value of chart data point
     * 
     * @return AsposePhp\Slides\Charts\DoubleChartValue 
     */
    public function get_YValue()
    {
    }

    /**
     * Returns the x value of chart data point
     * 
     * @return AsposePhp\Slides\Charts\StringOrDoubleChartValue 
     */
    public function get_XValue()
    {
    }

     /**
     * Specifies a data marker
     * 
     * @return AsposePhp\Slides\Charts\Marker 
     */
    public function get_Marker()
    {
    }

    /**
     * Removes DataPoint from chart series
     * @return void
     */
    public function Remove()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents collection of a series data point
 */
class ChartDataPointCollection
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns the data point the given index points to.
     * 
     * @param int $index The index.
     * @throws System::ArgumentOutOfRangeException if index is invalid or does not exist
     * @return AsposePhp\Slides\Charts\ChartDataPoint
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in collection.
     * 
     * @return int 
     */
    public function get_Count()
    {
    }

    /**
     * Removes the element at the given index
     * 
     * @return void
     */
    public function RemoveAt()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents collection of a cells with data
 */
class ChartCellCollection
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }


    /**
     * Returns the series collection from chart data. 
     * 
     * @throws System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @param int $index The index
     * @return AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function idx_get(int $index)
    {
    }

    /**
     *Returns the number of items in collection
     * 
     * @return int 
     */
    public function get_Count()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represent string value which can be stored in pptx presentation document in two ways: 1) in cell/cells of workbook related to chart; 2) as literal value
 */
class StringChartValue
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }


    /**
     * Null value assigning is not allowed. Returning value always is not null.. 
     * 
     * @return AsposePhp\Slides\Charts\ChartCellCollection 
     */
    public function get_AsCells()
    {
    }


}

namespace AsposePhp\Slides\Charts;



/**
 * Represents cell for chart data
 */
class ChartDataCell
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * @brief Returns the UTF8 string value of this data cell. 
     * 
     * @return string 
     */
    public function get_Value()
    {
    }

    /**
     *  Returns the index of the row of worksheet in which the cell is located
     * 
     * @return int 
     */
    public function get_Row()
    {
    }

    public function get_Column()
    {
    }

    /**
     * Sets the custom display format of numbers and dates. If value is empty will be used PresetNumberFormat value
     * 
     * @param string $value The new value
     * @return string 
     */
    public function set_CustomNumberFormat(string $value)
    {
    }

    /**
     * Sets the value.
     * 
     * @param string $value The new value
     * @param string $value The type of the value, int, float or string.
     * @return void 
     */
    public function set_Value(string $value, string $type)
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents chart categories
 */
class ChartCategory
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * @brief Returns If true then AsCell property is actual. In other words, worksheet is used for storing category (this case supports a multi-level category). If false then AsLiteral property is actual. In other words, worksheet is NOT used for storing category (and this case doesn't support a multi-level categories).. 
     * 
     * @return bool 
     */
    public function get_UseCell()
    {
    }

    /**
     * Returns Aspose.Cells.Cell object. If category is multi-level then used Aspose.Cells.Cell object for level "0". 
     * 
     * @return AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function get_AsCell()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartCategoryCollection
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns the series collection from chart data. 
     * 
     * @throws System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @param int $index The index
     * @return AsposePhp\Slides\Charts\ChartCategory 
     */
    public function idx_get(int $index)
    {
    }

    /**
     * @brief Returns the number of items in the collection
     * 
     * @return int 
     */
    public function get_Count()
    {
    }

    /**
     * @brief Removes the element at the given index
     * 
     * @param int $index The index
     * @return void 
     */
    public function RemoveAt(int $index)
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents a chart series
 */
class ChartSeries
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }


    /**
     * Return series StringChartValue object 
     * 
     * @return AsposePhp\Slides\Charts\StringChartValue 
     */
    public function get_Name()
    {
    }

    /**
     * Returns the data point collection
     * 
     * @return  AsposePhp\Slides\Charts\ChartDataPointCollection
     */
    public function get_DataPoints()
    {
    }

    /**
     * Specifies the bar, column or bubble series shall invert its colors if the value is negative
     * 
     * @param bool $value should invert or not? 
     * @return Php::Value 
     */
    public function set_InvertIfNegative(bool $value)
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents collection of ChartSeries
 */
class ChartSeriesCollection
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns the series collection from chart data. 
     * 
     * @throws System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @param int $index The index
     * @return AsposePhp\Slides\Charts\ChartSeries 
     */
    public function idx_get(int $index)
    {
    }

    /**
     * Returns the number of items in collection
     * 
     * @return int 
     */
    public function get_Count()
    {
    }

    /**
     * @brief Removes the element at the given index
     * 
     * @param int $index The index
     * @return void 
     */
    public function RemoveAt(int $index)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a table on a slide
 */
class Table
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

    /**
     * Returns true if this a GroupShape
     * 
     * @return bool
     */
    public function isGroupShape()
    {
    }

      /**
     * Returns true if this a Chart
     * 
     * @return bool
     */
    public function isChart()
    {
    }

    /**
     * Returns true if this a Table. Always true.
     * 
     * @return bool
     */
    public function isTable()
    {
    }

    /**
     * Returns true if this AutoShape
     * 
     * @return bool
     */
    public function isAutoShape()
    {
    }

    /**
     * Returns true if this PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame()
    {
    }


    /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector()
    {
    }

     /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }


    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }

     /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }

      /**
     * @brief Merges neighbour cells
     * 
     * @param object $cell1 The cell 
     * @param object $cell2 The other cell 
     * @return AsposePhp\Slides\Cell 
     */
    public function MergeCells(?\AsposePhp\Slides\Cell $cell1, ?\AsposePhp\Slides\Cell $cell2, bool $allowSplitting)
    {
    }

     /**
     * Returns the collectoin of rows. Read-only IRowCollection
     * 
     * @return AsposePhp\Slides\RowCollection 
     */
    public function get_Rows()
    {
    }

    /**
     * Returns the collectoin of columns. Read-only IColumnCollection
     * 
     * @return AsposePhp\Slides\ColumnCollection 
     */
    public function get_Columns()
    {
    }


}

namespace AsposePhp\Slides\Charts;

class ChartData
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     *  Returns the series collection from chart data. 
     * 
     * @return AsposePhp\Slides\Charts\ChartSeriesCollection 
     */
    public function get_Series()
    {
    }

    /**
     * Returns categories collection.
     * 
     * @return AsposePhp\Slides\Charts\ChartCategoryCollection 
     */
    public function get_Categories()
    {
    }

    /**
     * Gets the cells factory to create cells used for chart series or categories. Read-only IChartDataWorkbook
     * 
     * @return AsposePhp\Slides\Charts\ChartDataWorkbook 
     */
    public function get_ChartDataWorkbook()
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Represents a chart
 */
class Chart
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }


    /**
     * Returns information about the linked or embedded data associated with a chart. 
     * 
     * @return AsposePhp\Slides\Charts\ChartData 
     */
    public function get_ChartData()
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

    /**
     * Returns true if this a GroupShape
     * 
     * @return bool
     */
    public function isGroupShape()
    {
    }

    /**
     * Returns true if this a AutoShape
     * 
     * @return bool
     */
    public function isAutoShape()
    {
    }

      /**
     * Returns true if this a Chart. Always true.
     * 
     * @return bool
     */
    public function isChart()
    {
    }

     /**
     * Returns true if this a Table.
     * 
     * @return bool
     */
    public function isTable()
    {
    }

    /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector()
    {
    }

    /**
     * Returns true if this a PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame()
    {
    }

     /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }

    /**
     * Gets the type of the shape
     * 
     * @return string 
     */
    public function get_Type()
    {
    }


    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

     /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }


    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }


    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a group of shapes on a slide
 */
class GroupShape
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * @brief Returns the shape collection for this group. 
     * @see Aspose::Slides::GroupShape
     * 
     * @return AsposePhp\Slides\ShapeCollection 
     */
    public function get_Shapes()
    {
    }

     /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

     /**
     * Returns true if this a GroupShape. Always true.
     * 
     * @return bool
     */
    public function isGroupShape()
    {
    }

     /**
     * Returns true if this a Chart
     * 
     * @return bool
     */
    public function isChart()
    {
    }

     /**
     * Returns true if this a AutoShape
     * 
     * @return bool
     */
    public function isAutoShape()
    {
    }

     /**
     * Returns true if this a table
     * 
     * @return bool
     */
    public function isTable()
    {
    }

     /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector()
    {
    }

     /**
     * Returns true if this a PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame()
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

     /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }

     /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }

     /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a Shape
 */
class Shape
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * Returns true if this a table
     * 
     * @return bool
     */
    public function isTable()
    {
    }

    /**
     * Returns true if this a Chart
     * 
     * @return bool
     */
    public function isChart()
    {
    }

    /**
     * Returns true if this a GroupShape
     * 
     * @return bool
     */
    public function isGroupShape()
    {
    }

    /**
     * Returns true if this a AutoShape
     * 
     * @return bool
     */
    public function isAutoShape()
    {
    }

    /**
     * Returns true if this a PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame()
    {
    }

    /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector()
    {
    }


     /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText()
    {
    }

     /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name()
    {
    }

     /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId()
    {
    }

     /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped()
    {
    }

      /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup()
    {
    }

     /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height()
    {
    }

     /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a collection of a shapes
 */
class ShapeCollection
{

    
    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }


    /**
     * Converts the shape collection to Array, casting shapes to appropriate type.
     * Currently Tables, Charts, AutoShape, GroupShape, Connector etc are recognized, everything else is Shape object.
     * 
     * @return array of shapes 
     */
    public function ToArray()
    {
    }

     /**
     * @Removes the given shape from collection
     * 
     * @param object $shape The shape to remove 
     */
    public function Remove(object $shape)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a TextFrame
 */
class TextFrame
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns the textframe content as UTF-8 String.
     * 
     * @return string 
     */
    public function get_Text()
    {
    }

    /**
     * @brief Sets text frame text content
     * 
     * @param string $text The new text 
     * @return void
     */
    public function set_Text(string $text)
    {
    }

    /**
     * Returns the list of all paragraphs in a frame
     * 
     * @return AsposePhp\Slides\ParagraphCollection 
     */
    public function get_Paragraphs()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a notes slide in a presentation
 */
class NotesSlide
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * Returns the TextFrame object which contains the notes text string
     * 
     * @return AsposePhp\Slides\TextFrame 
     */
    public function get_NotesTextFrame()
    {
    }


}

namespace AsposePhp\Slides;

class NotesSlideManager
{


    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns a NotesSlide object wrapper. 
     * 
     * @return AsposePhp\Slides\NotesSlide 
     */
    public function get_NotesSlide()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents the text extracted from the slide
 */
class SlideText
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

    /**
     * Returns all text from the slide as UTF-8 string
     * 
     * @return string 
     */
    public function get_Text()
    {
    }

    /**
     * Returns the master text as UTF-8 string
     * 
     * @return string
     */
    public function get_MasterText()
    {
    }

     /**
     * Returns the layout text as UTF-8 string
     * 
     * @return string
     */
    public function get_LayoutText()
    {
    }

     /**
     * Returns the notes text as UTF-8 string
     * 
     * @return string
     */
    public function get_NotesText()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Allows to create presentation via COM interface
 */
class PresentationFactory
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns all text from the presentation (charts, tables not included!).
     * 
     * @param string $path Path to the peresentation file to read.
     * 
     * @throws System::ArgumentException path is invalid
     * @throws System::IO::FileNotFoundException File or path doesn't exist
     * @return Php::Value 
     */
    public function GetPresentationText(string $path)
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents the text extracted from the slide
 */
class PresentationText
{

    /**
    * PHP Constructor
    */
    public function __construct()
    {
    }

     /**
     * Returns an array of SlideText objects which hold text elements. There could be less SlideText objects than the number
     * of the actual slides. Returns AsposePhp\Slides\SlideText array.
     * 
     * @return array 
     */
    public function get_SlidesText()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a collection of a slides
 */
class ISlideCollection
{

     /**
     * Returns the number of slides in the collection.
     * 
     * @return int 
     */
    public function size()
    {
    }

    /**
     * Returns a slide from the collection.
     * 
     * @param int $index A 0 based index of the slide
     * 
     * @throws System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return AsposePhp\Slides\Slide 
     */
    public function get_Item(int $index)
    {
    }

     /**
     * Adds a copy of a specified slide to the end of the collection
     * 
     * @param object $slide The slide to be cloned
     * @throws Aspose::Slides::PptxEditException if cannot modify presentation
     * @return void 
     */
    public function AddClone(?\AsposePhp\Slides\Slide $slide)
    {
    }


}

namespace AsposePhp;

class AsposeUtil
{

    /**
     * Returns Aspose.Slides version number
     * 
     * @return string
     */
    public static function getVersion()
    {
    }


}

namespace AsposePhp\Slides;

/**
 * Represents a slide
 */
class Slide
{

    /**
     * Returns thumbnail image of slide as base64 string or byte array.
     * 
     * @param float $scaleX The x value to scale by
     * @param float $scaleY The y value to scale by
     * @param string $format The image format. Either png or jpeg.
     * @param bool $asArray Return byte array if true
     * 
     * @return array or string
     */
    public function GetThumbnail(float $scaleX, float $scaleY, string $format, bool $asArray)
    {
    }

     /**
     * Returns the layout slide for the current slide
     * 
     * @return AsposePhp\Slides\LayoutSlide 
     */
    public function get_LayoutSlide()
    {
    }

     /**
     *  Returns the shape collection
     * 
     * @return AsposePhp\Slides\ShapeCollection 
     */
    public function get_Shapes()
    {
    }

    /**
     * Returns the index of this slide
     * 
     * @return int 
     */
    public function getSlideNumber()
    {
    }

    /**
     * Returns all text from slide (charts, tables excluded)
     * 
     * @return string 
     */
    public function getSlideText()
    {
    }

    /**
     * Returns the layout text
     * 
     * @return string 
     */
    public function getLayoutText()
    {
    }

    /**
     * Returns the master text
     * 
     * @return Php::Value 
     */
    public function getMasterText()
    {
    }

    /**
     * Returns the notes text
     * 
     * @return Php::Value 
     */
    public function getNotesText()
    {
    }


    /**
     *  Returns the SlideManager instance.
     * 
     * @return AsposePhp\Slides\NotesSlideManager 
     */
    public function get_NotesSlideManager()
    {
    }

    /**
     * Removes slide from presentation
     * 
     * @return void
     */
    public function Remove()
    {
    }


}

namespace AsposePhp\Slides;

class Presentation
{

     /**
     *  Loads license file
     * 
     * @param string $path Has one param, the path
     * 
     * @throws System::ArgumentException path is invalid
     * @throws System::IO::FileNotFoundException File does not exist
     * @throws System::UnauthorizedAccessException Has no right to access file
     * @throws System::Xml::XmlException File contains invalid XML
     * 
     */
    public function load(string $path)
    {
    }

    /**
     *  PHP Constructor
     * 
     * @param string $path Path to presentation file to read. This is optional. If not defined, an empty presentation will be created.
     * @param string $licensePath The path to the license file. Optional. If omitted, loadLicense should be called.
     */
    public function __construct(string $path = null, string $licensePath = null)
    {
    }

    /**
     *  Returns the number of slides in presentation.
     * 
     * @return int 
     */
    public function getNumberOfSlides()
    {
    }

    /**
     *  Returns a collection of Slide objects.
     * 
     * @return AsposePhp\Slides\ISlideCollection 
     */
    public function getSlides()
    {
    }

    /**
     *  Returns a specific slide by index.
     * 
     * @param int $slideNo The 0 based index of the slide.
     * 
     * @throws System::ArgumentOutOfRangeException index does not exist.
     * @return AsposePhp\Slides\Slide 
     */
    public function getSlide(int $slideNo)
    {
    }

     /**
     *  Writes the presentaton to disk or returns it as byte array.
     * 
     * @param string $outfile Output path. File must not exist.
     * @param string $format file format.
     * @param bool $asArray AsArray if true, byte array will be returned.
     * 
     * @throws System::IO::IOException cannot access path
     * @throws System::UnauthorizedAccessException Has no right access file
     * 
     * @return null
     */
    public function save(string $outfile, string $format, bool $asArray)
    {
    }

     /**
     * Clones the slide with given index.
     * 
     * @param int $index 0 based index of the slide to be cloned
     * 
     * @throws System::ArgumentOutOfRangeException slide index does not exist
     * @throws Aspose::Slides::PptxEditException PPT modification failed.
     * 
     * @return void
     */
    public function cloneSlide(int $outfile)
    {
    }

     /**
     *  Returns slide size object
     * 
     * @return AsposePhp\Slides\SlideSize 
     */
    public function get_SlideSize()
    {
    }

    /**
     * Returns a list of all master slides that are defined in the presentation. Read-only IMasterSlideCollection
     * 
     * @return AsposePhp\Slides\MasterSlideCollection 
     */
    public function get_Masters()
    {
    }

    /**
     * Returns the collection of all images in the presentation. Read-only IImageCollection
     * 
     * @return AsposePhp\Slides\ImageCollection 
     */
    public function get_Images()
    {
    }


}

class PhpCpp::Functor
{


}

