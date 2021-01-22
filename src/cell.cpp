#include "../include/aspose.h"
#include "../include/cell.h"
#include "../include/text_frame.h"
#include "../include/cell-format.h"
#include <phpcpp.h>

using namespace Aspose::Slides;

using namespace std;

namespace AsposePhp
{

    /**
     * @brief Returns the text frame of a cell. Read-only ITextFrame
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_TextFrame()
    {
        return Php::Object("AsposePhp\\Slides\\TextFrame", wrapObject<ITextFrame, AsposePhp::TextFrame, &ICell::get_TextFrame>());
    }

    /**
     * @brief Returns the CellFormat object that contains formatting properties for this cell. Read-only ICellFormat
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_CellFormat()
    {
        return Php::Object("AsposePhp\\Slides\\CellFormat", wrapObject<ICellFormat, AsposePhp::CellFormat, &ICell::get_CellFormat>());
    }

    /**
     * @brief Returns the number of rows that a merged cell spans. This is used in combination with the vMerge attribute on other cells in order to specify the beginning cell of a horizontal merge. Read-only int32_t
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_RowSpan()
    {
        return _asposeObj->get_RowSpan();
    }

    /**
     * @brief Returns the number of grid columns in the parent table's table grid which shall be spanned by the current cell. This property allows cells to have the appearance of being merged, as they span vertical boundaries of other cells in the table. Read-only int32_t.
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_ColSpan()
    {
        return _asposeObj->get_ColSpan();
    }

    /**
     * @brief Splits the cell to two cells by index of column
     * 
     * @param params 
     */
    void Cell::SplitByRowSpan(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->SplitByRowSpan(index);
    }

    /**
     * @brief Splits the cell to two cells by index of column
     * 
     * @param params 
     */
    void Cell::SplitByColSpan(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->SplitByColSpan(index);
    }

    Php::Value Cell::get_IsMergedCell()
    {
        return _asposeObj->get_IsMergedCell();
    }

} // namespace AsposePhp
