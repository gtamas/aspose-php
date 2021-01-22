#include "../include/aspose.h"
#include "../include/table.h"
#include "../include/cell.h"
#include "../include/row-collection.h"
#include "../include/column-collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp
{

    Php::Value Table::isGroupShape()
    {
        return Shape::isGroupShape();
    }

    Php::Value Table::isChart()
    {
        return Shape::isChart();
    }

    Php::Value Table::isTable()
    {
        return true;
    }

    Php::Value Table::isAutoShape()
    {
        return Shape::isAutoShape();
    }

    Php::Value Table::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

    Php::Value Table::isConnector()
    {
        return Shape::isConnector();
    }

    Php::Value Table::get_Height()
    {
        return Shape::get_Height();
    }

    Php::Value Table::get_Width()
    {
        return Shape::get_Width();
    }

    Php::Value Table::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    Php::Value Table::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    Php::Value Table::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    Php::Value Table::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    Php::Value Table::get_Name()
    {
        return Shape::get_Name();
    }

    /**
     * @brief Returns the collectoin of rows. Read-only IRowCollection
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_Rows() {
        SharedPtr<IRowCollection> col = AsposeObjectWrapper<ITable>::_asposeObj->get_Rows();
        RowCollection *phpValue = new RowCollection(col);
        return Php::Object("AsposePhp\\Slides\\RowCollection", phpValue);
    }


    /**
     * @brief Returns the collectoin of columns. Read-only IColumnCollection
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_Columns() {
        SharedPtr<IColumnCollection> col = AsposeObjectWrapper<ITable>::_asposeObj->get_Columns();
        ColumnCollection *phpValue = new ColumnCollection(col);
        return Php::Object("AsposePhp\\Slides\\ColumnCollection", phpValue);
    }

    /**
     * @brief Merges neighbour cells
     * 
     * @param params 
     * @return Php::Value 
     */
    Php::Value Table::MergeCells(Php::Parameters &params)
    {
        Php::Value cell1obj = params[0]; 
        Php::Value cell2obj = params[1]; 
        bool allowSplitting = params[2].boolValue();
        Cell * cell1 = (Cell *) cell1obj.implementation();
        Cell * cell2 = (Cell *) cell2obj.implementation();
        SharedPtr<Aspose::Slides::ICell> merged = AsposeObjectWrapper<ITable>::_asposeObj->MergeCells(cell1->getAsposeClass(), cell2->getAsposeClass(), allowSplitting);
        Cell * phpValue = new Cell(merged);
        return Php::Object("AsposePhp\\Slides\\Cell", phpValue);
    }

} // namespace AsposePhp
