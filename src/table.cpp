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


    /**
     * @brief Returns true if shape is GroupShape.
     * 
     * @return Php::Value 
     */
    Php::Value Table::isGroupShape()
    {   
        return Shape::isGroupShape();
    }

     /**
     * @brief Returns true if shape is chart
     * 
     * @return Php::Value 
     */
    Php::Value Table::isChart()
    {
        return Shape::isChart();
    }


    /**
     * @brief Returns true if shape is table. Always true
     * 
     * @return Php::Value 
     */
    Php::Value Table::isTable()
    {
        return true;
    }

    /**
     * @brief Returns true if shape is AutoShape
     * 
     * @return Php::Value 
     */
    Php::Value Table::isAutoShape()
    {
        return Shape::isAutoShape();
    }

  /**
     * @brief Returns true if shape is picture frame
     * 
     * @return Php::Value 
     */
    Php::Value Table::isPictureFrame()
    {
        return Shape::isPictureFrame();
    }

  /**
     * @brief Returns true if shape is Connector
     * 
     * @return Php::Value 
     */
    Php::Value Table::isConnector()
    {
        return Shape::isConnector();
    }

     /**
     * @brief Returns the height of the shape. Read float.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.i_shape#a746b51dddc1f01438ea7cd6907a8e9d2
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_Height()
    {
        return Shape::get_Height();
    }

    /**
     * @brief Returns the width of the shape. Read float.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a7fa9a747ccf07632e69b26e9699f34f7
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_Width()
    {
        return Shape::get_Width();
    }

   /**
     * @brief Determines whether the shape is grouped. Read-only bool
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#aa7d7a0f57dcc8bbcf521858f44d7fda8
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_IsGrouped()
    {
        return Shape::get_IsGrouped();
    }

    /**
     * @brief Returns parent GroupShape object if shape is grouped. Otherwise returns null.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#af358f46d82b1e2c1942cc6afef897a8e
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_ParentGroup()
    {
        return Shape::get_ParentGroup();
    }

    /**
     * @brief Returns the alternative text associated with a shape
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a881872af9669da1dfe9a51a894b8dfcf
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_AlternativeText()
    {
        return Shape::get_AlternativeText();
    }

    /**
     * @brief Gets unique shape identifier in slide scope. Read-only uint32_t. See also Shape::get_UniqueId for getting unique shape identifier in presentation scope
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a03a7b856e59931340e7fcffb5e4ecc81
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_UniqueId()
    {
        return Shape::get_UniqueId();
    }

    /**
     * @brief Returns the FillFormat object that contains fill formatting properties for a shape. Note: can return null for certain types of shapes which don't have fill properties.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#a1bfe6f11a0dad278184d03ca10d27359
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_FillFormat()
    {
        return Shape::get_FillFormat();
    }


   /**
     * @brief Returns the name of a shape. Must be not null. Use empty string value if needed
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.shape#ae804b4e10eb56606de229ed31f373180
     * 
     * @return Php::Value 
     */
    Php::Value Table::get_Name()
    {
        return Shape::get_Name();
    }
    
    /**
     * @brief Returns the collection of rows. Read-only IRowCollection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.table#adbf24140f25a297b5c978bba972baf42
     * @return Php::Value 
     */
    Php::Value Table::get_Rows() {
        SharedPtr<IRowCollection> col = AsposeObjectWrapper<ITable>::_asposeObj->get_Rows();
        RowCollection *phpValue = new RowCollection(col);
        return Php::Object("AsposePhp\\Slides\\RowCollection", phpValue);
    }


    /**
     * @brief Returns the collection of columns. Read-only IColumnCollection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.table#af69cac42a067f29f5e5a8f53f827323a
     * @return Php::Value 
     */
    Php::Value Table::get_Columns() {
        SharedPtr<IColumnCollection> col = AsposeObjectWrapper<ITable>::_asposeObj->get_Columns();
        ColumnCollection *phpValue = new ColumnCollection(col);
        return Php::Object("AsposePhp\\Slides\\ColumnCollection", phpValue);
    }

    /**
     * @brief Merges neighbour cells
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.table#a4ac7ff23312d0e016ceb79c5d009ad26
     * @param params Php::Parameters
     * @param params[0] Cell cell1 A cell object
     * @param params[1] Cell cell2 Another cell object
     * @param params[2] bool allowSplitting True to allow cells splitting
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
