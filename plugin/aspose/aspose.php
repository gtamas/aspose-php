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
     * @return \AsposePhp\Slides\ColorFormat
     */
    public function get_SolidFillColor(): ColorFormat
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
     * Returns the fill format of a line. Read-only ILineFillFormat
     * @link https://apireference.aspose.com/slides/cpp/class/aspose.slides.line_format
     * 
     * 
     * 
     * @return \AsposePhp\Slides\LineFillFormat
     */
    public function get_FillFormat(): LineFillFormat
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
     * @return \AsposePhp\Slides\PPImage
     */
    public function idx_get(int $index): PPImage
    {
    }

     /**
     * Returns the number of images in collection.
     * 
     * @return int
     */
    public function get_Count(): int
    {
    }

    /**
     * Add an image to a presentation.
     * 
     * @param string $fileOrEncoded the image to add. Path or base64 encoded string.
     * @param bool $isBase64 the is this base64 encoded input.
     * @return \AsposePhp\Slides\PPImage
     */
    public function AddImage(string $fileOrEncoded, bool $isBase64 = false): PPImage
    {
    }


}

namespace AsposePhp\Slides\Charts;

/**
 * Provides access to embedded Excel workbook
 */
class ChartDataWorkbook
{

    /**
     * Gets the cell that can be used for chart series or categories
     * 
     * @param int $worksheetIndex Index of the worksheet
     * @param int $row The row
     * @param int $column The column
     * @param string $value The new value
     * @return \AsposePhp\Slides\Charts\ChartDataCell
     */
    public function GetCell(int $worksheetIndex, int $row, int $column, string $value): ChartDataCell
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
     * @return \AsposePhp\Slides\MasterSlide
     */
    public function idx_get(int $index): MasterSlide
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count(): int
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
    public function set_Width(int $value): void
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
     * @return \AsposePhp\Slides\Column
     */
    public function idx_get(int $index): Column
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count(): int
    {
    }

    /**
     * Removes a column at the specified position from a table
     * 
     * @param int $index The index to remove.
     * @param bool $withAttachedRows Remove attached rows as well or not.
     * @return void
     */
    public function RemoveAt(int $index, bool $withAttachedRows): void
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
     * Returns a cell fill properties object. Read-only IFillFormat
     * 
     * @return \AsposePhp\Slides\Charts\FillFormat
     */
    public function get_FillFormat(): FillFormat
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
     * @return \AsposePhp\Slides\TextFrame 
     */
    public function get_TextFrame(): TextFrame
    {
    }

    /**
     * Returns the CellFormat object that contains formatting properties for this cell. Read-only ICellFormat
     * 
     * @return \AsposePhp\Slides\CellFormat 
     */
    public function get_CellFormat(): CellFormat
    {
    }

    /**
     * Returns the number of rows that a merged cell spans. This is used in combination with the vMerge attribute on other cells in order to specify the beginning cell of a horizontal merge. Read-only int32_t
     * 
     * @return int 
     */
    public function get_RowSpan(): int
    {
    }

     /**
     * Returns the number of grid columns in the parent table's table grid which shall be spanned by the current cell. This property allows cells to have the appearance of being merged, as they span vertical boundaries of other cells in the table. Read-only int32_t.
     * 
     * @return int 
     */
    public function get_ColSpan(): int
    {
    }

    /**
     * Splits the cell to two cells by index of row
     * 
     * @param int $index The index to split by 
     * @return void 
     */
    public function SplitByRowSpan(int $index): void
    {
    }

    /**
     *  Splits the cell to two cells by index of column
     * 
     * @param int $index The index to split by 
     * @return void 
     */
    public function SplitByColSpan(int $index): void
    {
    }

    /**
     * Is this a merged cell?
     * 
     * @return bool 
     */
    public function get_IsMergedCell(): bool
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
     * @return \AsposePhp\Slides\Cell
     */
    public function idx_get(int $index): Cell
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count(): int
    {
    }

     /**
     * Sets the minimal possible height of a row.
     * 
     * @param int $index The new height value.
     * @return void
     */
    public function set_MinimalHeight(int $value): void
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
     * @return \AsposePhp\Slides\Row
     */
    public function idx_get(int $index): Row
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count(): int
    {
    }

    /**
     * Removes a row at the specified position from a table
     * 
     * @param int $index The index.
     * @param bool $withAttachedRows Remove attached rows too or not.
     * @return void
     */
    public function RemoveAt(int $index, bool $withAttachedRows): void
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
    public function get_AlternativeText(): string
    {
    }

    /**
     * Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isGroupShape(): bool
    {
    }

    /**
     * Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isChart(): bool
    {
    }

    /**
     * Returns true if shape is a table, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isTable(): bool
    {
    }

    /**
     * Returns true if shape is AutoShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isAutoShape(): bool
    {
    }

    /**
     * Returns true if shape is a connector, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isConnector(): bool
    {
    }

    /**
     * Returns true if shape is PictureFrame, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isPictureFrame(): bool
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }

    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

    /**
     * Returns the shape to attach the beginning of the connector to. Read IShape.
     * 
     * @return \AsposePhp\Slides\Shape 
     */
    public function get_StartShapeConnectedTo(): Shape
    {
    }


    /**
     * Returns the shape to attach the end of the connector to. Read IShape.
     * 
     * @return \AsposePhp\Slides\Shape 
     */
    public function get_EndShapeConnectedTo(): Shape
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
    public function get_AlternativeText(): string
    {
    }

     /**
     * Returns true if shape is GroupShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isGroupShape(): bool
    {
    }

     /**
     * Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isChart(): bool
    {
    }

     /**
     * Returns true if shape is Table, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isTable(): bool
    {
    }

     /**
     * Returns true if shape is AutoShape, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isAutoShape(): bool
    {
    }

     /**
     * Returns true if shape is Connector, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isConnector(): bool
    {
    }

     /**
     * Returns true if shape is PictureFrame. Always true.
     * 
     * @return bool 
     */
    public function isPictureFrame(): bool
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }

    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
     * @return \AsposePhp\Slides\Charts\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
    public function set_Color(string $color): void
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
     * @return void
     */
    public function set_FillType(int $type): void
    {
    }


    /**
     * Returns the fill color.
     * 
     * @return \AsposePhp\Slides\ColorFormat 
     */
    public function get_SolidFillColor(): ColorFormat
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
     * @return \AsposePhp\Slides\Charts\FillFormat 
     */
    public function get_Fill(): FillFormat
    {
    }

    /**
     * @brief Returns line style properties of a chart
     * 
     * @return \AsposePhp\Slides\LineFormat
     */
    public function get_Line(): LineFormat
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
     * @return \AsposePhp\Slides\Charts\Format 
     */
    public function get_Format(): Format
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
    public function isGroupShape(): bool
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText(): string
    {
    }

      /**
     * Returns true if shape is Chart, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isChart(): bool
    {
    }

    /**
     * Returns true if shape is Table, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isTable(): bool
    {
    }

    /**
     * Returns true if shape is PictureFrame, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isPictureFrame(): bool
    {
    }


    /**
     * Returns true if shape is AutoShape. This is always true.
     * 
     * @return bool 
     */
    public function isAutoShape(): bool
    {
    }


    /**
     * Returns true if shape is Connector, otherwise it returns false.
     * 
     * @return bool 
     */
    public function isConnector(): bool
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

     /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }

    /**
     * Returns the text frame from this shape
     * 
     * @return \AsposePhp\Slides\TextFrame
     */
    public function get_TextFrame(): TextFrame
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

      /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }

    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
     * @return void
     */
    public function set_Text(string $value): void
    {
    }

     /**
     * Gets the plain text of a portion.
     * 
     * @return string 
     */
    public function get_Text(): string
    {
    }

    /**
     * Returns formatting object which contains explicitly set formatting properties of the text portion with no inheritance applied.
     * 
     * @return \AsposePhp\Slides\PortionFormat 
     */
    public function get_PortionFormat(): PortionFormat
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
     * @return \AsposePhp\Slides\Portion
     */
    public function idx_get(int $index): Portion
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count(): int
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
    public function get_Text(): string
    {
    }

    /**
     * @brief Returns the collection of a text portions
     * 
     * @return \AsposePhp\Slides\PortionCollection 
     */
    public function get_Portions(): PortionCollection
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
     * @return \AsposePhp\Slides\Paragraph
     */
    public function idx_get(int $index): Paragraph
    {
    }

    /**
     * Returns the number of items in the collection
     * 
     * @return int
     */
    public function get_Count(): int
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
     * @return  \AsposePhp\Slides\TextFrame[]
     */
    public static function GetAllTextBoxes(object $slide): array
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
     * @return \AsposePhp\Slides\MasterSlide 
     */
    public function get_MasterSlide(): MasterSlide
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
    public function get_Width(): float
    {
    }

    /**
     * Returns the value of height represented by the current object.  
     * 
     * @return float 
     */
    public function get_Height(): float
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
     * @return \AsposePhp\Slides\SizeF 
     */
    public function get_Size(): SizeF
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
     * @return \AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function get_AsCell(): ChartDataCell
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
     * @return \AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function get_AsCell(): ChartDataCell
    {
    }


    /**
     * @brief Sets data
     * 
     * @param string $value The new value
     * @return void
     */
    public function set_Data(string $value): void
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
     * @return \AsposePhp\Slides\TextFrame 
     */
    public function get_TextFrameForOverriding(): TextFrame
    {
    }

    /**
     * Returns actual label text based on DataLabelFormat settings or TextFrameForOverriding.Text value
     * 
     * @return string 
     */
    public function GetActualLabelText(): string
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
     * @return \AsposePhp\Slides\Charts\DataLabel 
     */
    public function get_Label(): DataLabel
    {
    }

    /**
     * Returns the value of chart data point
     * 
     * @return \AsposePhp\Slides\Charts\DoubleChartValue 
     */
    public function get_Value(): DoubleChartValue
    {
    }

    /**
     * Returns the y value of chart data point
     * 
     * @return \AsposePhp\Slides\Charts\DoubleChartValue 
     */
    public function get_YValue(): DoubleChartValue
    {
    }

    /**
     * Returns the x value of chart data point
     * 
     * @return \AsposePhp\Slides\Charts\StringOrDoubleChartValue 
     */
    public function get_XValue(): StringOrDoubleChartValue
    {
    }

    /**
     * Specifies a data marker
     * 
     * @return \AsposePhp\Slides\Charts\Marker 
     */
    public function get_Marker(): Marker
    {
    }

    /**
     * Removes DataPoint from chart series
     * 
     * @return void
     */
    public function Remove(): void
    {
    }

    /**
     * Represents the formatting properties. Read IFormat
     * 
     * @return \AsposePhp\Slides\Charts\Format
     */
    public function get_Format(): Format
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
     * @return \AsposePhp\Slides\Charts\ChartDataPoint
     */
    public function idx_get(int $index): ChartDataPoint
    {
    }

    /**
     * Returns the number of items in collection.
     * 
     * @return int 
     */
    public function get_Count(): int
    {
    }

    /**
     * Removes the element at the given index
     * @param int $index The index
     * 
     * @return void
     */
    public function RemoveAt(int $index): void
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
     * @return \AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function idx_get(int $index): ChartDataCell
    {
    }

    /**
     *Returns the number of items in collection
     * 
     * @return int 
     */
    public function get_Count(): int
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
     * @return \AsposePhp\Slides\Charts\ChartCellCollection 
     */
    public function get_AsCells(): ChartCellCollection
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
    public function get_Value(): string
    {
    }

    /**
     *  Returns the index of the row of worksheet in which the cell is located
     * 
     * @return int 
     */
    public function get_Row(): int
    {
    }

     /**
     *  Returns the index of the column of worksheet in which the cell is located
     * 
     * @return int 
     */
    public function get_Column(): int
    {
    }

    /**
     * Sets the custom display format of numbers and dates. If value is empty will be used PresetNumberFormat value
     * 
     * @param string $value The new value
     * @return string 
     */
    public function set_CustomNumberFormat(string $value): string
    {
    }

    /**
     * Sets the value.
     * 
     * @param string $value The new value
     * @param string $value The type of the value, int, float or string.
     * @return void 
     */
    public function set_Value(string $value, string $type): void
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
    public function get_UseCell(): bool
    {
    }

    /**
     * Returns Aspose.Cells.Cell object. If category is multi-level then used Aspose.Cells.Cell object for level "0". 
     * 
     * @return \AsposePhp\Slides\Charts\ChartDataCell 
     */
    public function get_AsCell(): ChartDataCell
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
     * @return \AsposePhp\Slides\Charts\ChartCategory 
     */
    public function idx_get(int $index): ChartCategory
    {
    }

    /**
     * @brief Returns the number of items in the collection
     * 
     * @return int 
     */
    public function get_Count(): int
    {
    }

    /**
     * @brief Removes the element at the given index
     * 
     * @param int $index The index
     * @return void 
     */
    public function RemoveAt(int $index): void
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
     * @return \AsposePhp\Slides\Charts\StringChartValue 
     */
    public function get_Name(): StringChartValue
    {
    }

    /**
     * Returns the data point collection
     * 
     * @return  AsposePhp\Slides\Charts\ChartDataPointCollection
     */
    public function get_DataPoints(): ChartDataPointCollection
    {
    }

    /**
     * Specifies the bar, column or bubble series shall invert its colors if the value is negative
     * 
     * @param bool $value should invert or not? 
     * @return void 
     */
    public function set_InvertIfNegative(bool $value): void
    {
    }

    /**
     * Specifies a data marker
     * 
     * @return \AsposePhp\Slides\Charts\Marker 
     */
    public function get_Marker(): Marker
    {
    }

    /**
     * Represents the formatting properties. Read IFormat
     * 
     * @return \AsposePhp\Slides\Charts\Format
     */
    public function get_Format(): Format
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
     * @return \AsposePhp\Slides\Charts\ChartSeries 
     */
    public function idx_get(int $index): ChartSeries
    {
    }

    /**
     * Returns the number of items in collection
     * 
     * @return int 
     */
    public function get_Count(): int
    {
    }

    /**
     * @brief Removes the element at the given index
     * 
     * @param int $index The index
     * @return void 
     */
    public function RemoveAt(int $index): void
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
    public function get_AlternativeText(): string
    {
    }

    /**
     * Returns true if this a GroupShape
     * 
     * @return bool
     */
    public function isGroupShape(): bool
    {
    }

      /**
     * Returns true if this a Chart
     * 
     * @return bool
     */
    public function isChart(): bool
    {
    }

    /**
     * Returns true if this a Table. Always true.
     * 
     * @return bool
     */
    public function isTable(): bool
    {
    }

    /**
     * Returns true if this AutoShape
     * 
     * @return bool
     */
    public function isAutoShape(): bool
    {
    }

    /**
     * Returns true if this PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame(): bool
    {
    }


    /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector(): bool
    {
    }

     /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }


    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }

    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }

     /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

      /**
     * Merges neighbour cells
     * 
     * @param object $cell1 The cell 
     * @param object $cell2 The other cell 
     * @return \AsposePhp\Slides\Cell 
     */
    public function MergeCells(?\AsposePhp\Slides\Cell $cell1, ?\AsposePhp\Slides\Cell $cell2, bool $allowSplitting): Cell
    {
    }

     /**
     * Returns the collectoin of rows. Read-only IRowCollection
     * 
     * @return \AsposePhp\Slides\RowCollection 
     */
    public function get_Rows(): RowCollection
    {
    }

    /**
     * Returns the collectoin of columns. Read-only IColumnCollection
     * 
     * @return \AsposePhp\Slides\ColumnCollection 
     */
    public function get_Columns(): ColumnCollection
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
     * @return \AsposePhp\Slides\Charts\ChartSeriesCollection 
     */
    public function get_Series(): ChartSeriesCollection
    {
    }

    /**
     * Returns categories collection.
     * 
     * @return \AsposePhp\Slides\Charts\ChartCategoryCollection 
     */
    public function get_Categories(): ChartCategoryCollection
    {
    }

    /**
     * Gets the cells factory to create cells used for chart series or categories. Read-only IChartDataWorkbook
     * 
     * @return \AsposePhp\Slides\Charts\ChartDataWorkbook 
     */
    public function get_ChartDataWorkbook(): ChartDataWorkbook
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
     * @return \AsposePhp\Slides\Charts\ChartData 
     */
    public function get_ChartData(): ChartData
    {
    }

    /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText(): string
    {
    }

    /**
     * Returns true if this a GroupShape
     * 
     * @return bool
     */
    public function isGroupShape(): bool
    {
    }

    /**
     * Returns true if this a AutoShape
     * 
     * @return bool
     */
    public function isAutoShape(): bool
    {
    }

      /**
     * Returns true if this a Chart. Always true.
     * 
     * @return bool
     */
    public function isChart(): bool
    {
    }

     /**
     * Returns true if this a Table.
     * 
     * @return bool
     */
    public function isTable(): bool
    {
    }

    /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector(): bool
    {
    }

    /**
     * Returns true if this a PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame(): bool
    {
    }

     /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

    /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }

    /**
     * Gets the type of the shape
     * 
     * @return string 
     */
    public function get_Type(): int
    {
    }


    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

     /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }


    /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }


    /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
     * @return \AsposePhp\Slides\ShapeCollection 
     */
    public function get_Shapes(): ShapeCollection
    {
    }

     /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText(): string
    {
    }

     /**
     * Returns true if this a GroupShape. Always true.
     * 
     * @return bool
     */
    public function isGroupShape(): bool
    {
    }

     /**
     * Returns true if this a Chart
     * 
     * @return bool
     */
    public function isChart(): bool
    {
    }

     /**
     * Returns true if this a AutoShape
     * 
     * @return bool
     */
    public function isAutoShape(): bool
    {
    }

     /**
     * Returns true if this a table
     * 
     * @return bool
     */
    public function isTable(): bool
    {
    }

     /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector(): bool
    {
    }

     /**
     * Returns true if this a PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame(): bool
    {
    }

    /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

     /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }

    /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

    /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }

     /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }

     /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
    public function isTable(): bool
    {
    }

    /**
     * Returns true if this a Chart
     * 
     * @return bool
     */
    public function isChart(): bool
    {
    }

    /**
     * Returns true if this a GroupShape
     * 
     * @return bool
     */
    public function isGroupShape(): bool
    {
    }

    /**
     * Returns true if this a AutoShape
     * 
     * @return bool
     */
    public function isAutoShape(): bool
    {
    }

    /**
     * Returns true if this a PictureFrame
     * 
     * @return bool
     */
    public function isPictureFrame(): bool
    {
    }

    /**
     * Returns true if this a Connector
     * 
     * @return bool
     */
    public function isConnector(): bool
    {
    }


     /**
     * Returns the alt text of the shape as string
     * 
     * @return string
     */
    public function get_AlternativeText(): string
    {
    }

     /**
     * Gets the name of the shape
     * 
     * @return string 
     */
    public function get_Name(): string
    {
    }

     /**
     * Gets unique id (int).
     * 
     * @return int 
     */
    public function get_UniqueId(): int
    {
    }

     /**
     * Determines whether the shape is grouped
     * 
     * @return bool 
     */
    public function get_IsGrouped(): bool
    {
    }

      /**
     * Returns parent GroupShape object if shape is grouped. Otherwise returns null
     * 
     * @return \AsposePhp\Slides\GroupShape 
     */
    public function get_ParentGroup(): GroupShape
    {
    }

     /**
     * Returns the height of the shape. Read float
     * 
     * @return float 
     */
    public function get_Height(): float
    {
    }

     /**
     * Returns the width of the shape. Read float
     * 
     * @return float 
     */
    public function get_Width(): float
    {
    }

    /**
     * Returns the FillFormat object that contains fill formatting properties for a shape
     * 
     * @return \AsposePhp\Slides\FillFormat 
     */
    public function get_FillFormat(): FillFormat
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
     * @return Shape[] 
     */
    public function ToArray(): array
    {
    }

     /**
     * @Removes the given shape from collection
     * 
     * @param object $shape The shape to remove 
     */
    public function Remove(object $shape): object
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
    public function get_Text(): string
    {
    }

    /**
     * @brief Sets text frame text content
     * 
     * @param string $text The new text 
     * @return void
     */
    public function set_Text(string $text): void
    {
    }

    /**
     * Returns the list of all paragraphs in a frame
     * 
     * @return \AsposePhp\Slides\ParagraphCollection 
     */
    public function get_Paragraphs(): ParagraphCollection
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
     * @return \AsposePhp\Slides\TextFrame 
     */
    public function get_NotesTextFrame(): TextFrame
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
     * @return \AsposePhp\Slides\NotesSlide 
     */
    public function get_NotesSlide(): NotesSlide
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
    public function get_Text(): string
    {
    }

    /**
     * Returns the master text as UTF-8 string
     * 
     * @return string
     */
    public function get_MasterText(): string
    {
    }

     /**
     * Returns the layout text as UTF-8 string
     * 
     * @return string
     */
    public function get_LayoutText(): string
    {
    }

     /**
     * Returns the notes text as UTF-8 string
     * 
     * @return string
     */
    public function get_NotesText(): string
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
     * @return \AsposePhp\Slides\PresentationText 
     */
    public function GetPresentationText(string $path): PresentationText
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
    public function get_SlidesText(): array
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
    public function size(): int
    {
    }

    /**
     * Returns a slide from the collection.
     * 
     * @param int $index A 0 based index of the slide
     * 
     * @throws System::ArgumentOutOfRangeException Index is invalid or does not exist
     * @return \AsposePhp\Slides\Slide 
     */
    public function get_Item(int $index): Slide
    {
    }

     /**
     * Adds a copy of a specified slide to the end of the collection
     * 
     * @param object $slide The slide to be cloned
     * @throws Aspose::Slides::PptxEditException if cannot modify presentation
     * @return \AsposePhp\Slides\Slide 
     */
    public function AddClone(\AsposePhp\Slides\Slide $slide): Slide
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
    public static function getVersion(): string
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
     * @return array | string
     */
    public function GetThumbnail(float $scaleX, float $scaleY, string $format, bool $asArray): array | string
    {
    }

     /**
     * Returns the layout slide for the current slide
     * 
     * @return \AsposePhp\Slides\LayoutSlide 
     */
    public function get_LayoutSlide(): LayoutSlide
    {
    }

     /**
     *  Returns the shape collection
     * 
     * @return \AsposePhp\Slides\ShapeCollection 
     */
    public function get_Shapes(): ShapeCollection
    {
    }

    /**
     * Returns the index of this slide
     * 
     * @return int 
     */
    public function getSlideNumber(): int
    {
    }

    /**
     * Returns all text from slide (charts, tables excluded)
     * 
     * @return string 
     */
    public function getSlideText(): string
    {
    }

    /**
     * Returns the layout text
     * 
     * @return string 
     */
    public function getLayoutText(): string
    {
    }

    /**
     * Returns the master text
     * 
     * @return string 
     */
    public function getMasterText(): string
    {
    }

    /**
     * Returns the notes text
     * 
     * @return string 
     */
    public function getNotesText(): string
    {
    }


    /**
     *  Returns the SlideManager instance.
     * 
     * @return \AsposePhp\Slides\NotesSlideManager 
     */
    public function get_NotesSlideManager(): NotesSlideManager
    {
    }

    /**
     * Removes slide from presentation
     * 
     * @return void
     */
    public function Remove(): void
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
    public function load(string $path): void
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
    public function getNumberOfSlides(): int
    {
    }

    /**
     *  Returns a collection of Slide objects.
     * 
     * @return \AsposePhp\Slides\ISlideCollection 
     */
    public function getSlides(): ISlideCollection
    {
    }

    /**
     *  Returns a specific slide by index.
     * 
     * @param int $slideNo The 0 based index of the slide.
     * 
     * @throws System::ArgumentOutOfRangeException index does not exist.
     * @return \AsposePhp\Slides\Slide 
     */
    public function getSlide(int $slideNo): Slide
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
    public function save(string $outfile, string $format, bool $asArray): null
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
    public function cloneSlide(int $outfile): void
    {
    }

     /**
     *  Returns slide size object
     * 
     * @return \AsposePhp\Slides\SlideSize 
     */
    public function get_SlideSize(): SlideSize
    {
    }

    /**
     * Returns a list of all master slides that are defined in the presentation. Read-only IMasterSlideCollection
     * 
     * @return \AsposePhp\Slides\MasterSlideCollection 
     */
    public function get_Masters(): MasterSlideCollection
    {
    }

    /**
     * Returns the collection of all images in the presentation. Read-only IImageCollection
     * 
     * @return \AsposePhp\Slides\ImageCollection 
     */
    public function get_Images(): ImageCollection
    {
    }


}



