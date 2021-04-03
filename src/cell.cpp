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
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#a5accef563a135aeb3d923257afe785ba
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_TextFrame()
    {
        return Php::Object("AsposePhp\\Slides\\TextFrame", wrapObject<ITextFrame, AsposePhp::TextFrame, &ICell::get_TextFrame>());
    }

    /**
     * @brief Returns the CellFormat object that contains formatting properties for this cell. Read-only ICellFormat
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#aeff8d47d789b83f67b4e7b5810242b8d
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_CellFormat()
    {
        return Php::Object("AsposePhp\\Slides\\CellFormat", wrapObject<ICellFormat, AsposePhp::CellFormat, &ICell::get_CellFormat>());
    }

    /**
     * @brief Returns the number of rows that a merged cell spans. This is used in combination with the vMerge attribute on other cells in order to specify the beginning cell of a horizontal merge. Read-only int32_t
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#a12cfc7472416e429a80c43840d31f29d
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_RowSpan()
    {
        return _asposeObj->get_RowSpan();
    }

    /**
     * @brief Returns the number of grid columns in the parent table's table grid which shall be spanned by the current cell. This property allows cells to have the appearance of being merged, as they span vertical boundaries of other cells in the table. Read-only int32_t.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#a37eb7057ebfd89fcf54abaa842e45587
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_ColSpan()
    {
        return _asposeObj->get_ColSpan();
    }

    /**
     * @brief Splits the cell to two cells by index of column
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#a1a7d64345bed3bc48e9f59b9dd28f5da
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the row
     */
    void Cell::SplitByRowSpan(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->SplitByRowSpan(index);
    }

    /**
     * @brief Splits the cell to two cells by index of column
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#afdf8904c6ad225683ac3d9acb023ba9f
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the column
     */
    void Cell::SplitByColSpan(Php::Parameters &params)
    {
        int32_t index = params[0].numericValue();
        _asposeObj->SplitByColSpan(index);
    }

    /**
     * @brief Returns true if the cell is merged with any adjusted cell, false otherwise. Read-only bool.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.cell#aa01caf2c49ed15eaa9b24745a323946d
     * 
     * @return Php::Value 
     */
    Php::Value Cell::get_IsMergedCell()
    {
        return _asposeObj->get_IsMergedCell();
    }

} // namespace AsposePhp
