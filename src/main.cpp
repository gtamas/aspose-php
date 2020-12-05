/**
 * @file main.cpp
 * @author Tamas Geschitz (you@domain.com)
 * @brief Main entry, PHP extension registration functions.
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright DashboardVision (c) 2020
 * 
 */

#include <phpcpp.h>
#include "../include/aspose_util.h"
#include "../include/presentation.h"
#include "../include/islide_collection.h"
#include "../include/presentation_factory.h"
#include "../include/presentation_text.h"
#include "../include/slide_text.h"
#include "../include/notes_slide_manager.h"
#include "../include/notes_slide.h"
#include "../include/text_frame.h"
#include "../include/shape_collection.h"
#include "../include/slide.h"
#include "../include/shape.h"
#include "../include/group_shape.h"
#include "../include/chart.h"
#include "../include/table.h"
#include "../include/chart_data.h"
#include "../include/chart_series_collection.h"
#include "../include/chart_series.h"
#include "../include/chart_category_collection.h"
#include "../include/chart_category.h"
#include "../include/chart_data_cell.h"
#include "../include/string_chart_value.h"
#include "../include/chart_cell_collection.h"
#include "../include/chart_data_point_collection.h"
#include "../include/chart_data_point.h"
#include "../include/data_label.h"
#include "../include/double_chart_value.h"
#include "../include/string_or_double_chart_value.h"
#include "../include/aspose_php.h"

using namespace AsposePhp;

/**
 *  tell the compiler that the get_module is a pure C function
 */
extern "C" {
    
    /**
     *  Function that is called by PHP right after the PHP process
     *  has started, and that returns an address of an internal PHP
     *  strucure with all the details and features of your extension
     *
     *  @return void*   a pointer to an address that is understood by PHP
     */
    PHPCPP_EXPORT void *get_module() 
    {
        static Php::Extension extension("aspose_php", "1.0");

        Php::Namespace ns("AsposePhp");

        // Presentation class

        Php::Class<AsposePhp::Presentation> pres("Presentation", 0);

        pres.method<&AsposePhp::Presentation::load>("load", { 
            Php::ByVal("path", Php::Type::String, true) 
        });
        pres.method<&AsposePhp::Presentation::__construct>("__construct", Php::Public, { 
            Php::ByVal("path", Php::Type::String, false) 
        });
        pres.method<&AsposePhp::Presentation::getPresentationText>("getPresentationText", Php::Public, { 
            Php::ByVal("path", Php::Type::String, true),
            Php::ByVal("type", Php::Type::String, true),
            Php::ByVal("arranged", Php::Type::Bool, false)   
        });
        pres.method<&AsposePhp::Presentation::getNumberOfSlides>("getNumberOfSlides", Php::Public, {});
        pres.method<&AsposePhp::Presentation::getSlides>("getSlides", Php::Public, {});
        pres.method<&AsposePhp::Presentation::getSlide>("getSlide", Php::Public, { 
            Php::ByVal("slideNo", Php::Type::Numeric, true) 
        });
        pres.method<&AsposePhp::Presentation::save>("save", Php::Public, { 
            Php::ByVal("outfile", Php::Type::String, true) 
        });
        pres.method<&AsposePhp::Presentation::cloneSlide>("cloneSlide", Php::Public, { 
            Php::ByVal("outfile", Php::Type::Numeric, true) 
        });

        // SlideCollection

        Php::Class<AsposePhp::ISlideCollection> col("ISlideCollection");

        col.method<&AsposePhp::ISlideCollection::size>("size", {});
        col.method<&AsposePhp::ISlideCollection::get_Item>("get_Item", {});


        // PresentationFactory

        Php::Class<AsposePhp::PresentationFactory> presentationFactory("PresentationFactory", 0);
        
        presentationFactory.method<&AsposePhp::PresentationFactory::__construct>("__construct", Php::Public, {});
        presentationFactory.method<&AsposePhp::PresentationFactory::GetPresentationText>("GetPresentationText",{ 
            Php::ByVal("path", Php::Type::String, true) 
        });


        // PresentationText

        Php::Class<AsposePhp::PresentationText> presentationText("PresentationText", 0);
        presentationText.method<&AsposePhp::PresentationText::__construct>("__construct", Php::Public, {});
        presentationText.method<&AsposePhp::PresentationText::get_SlidesText>("get_SlidesText", Php::Public, {});
        
         // SlideText

        Php::Class<AsposePhp::SlideText> slideText("SlideText", 0);
        slideText.method<&AsposePhp::SlideText::__construct>("__construct", Php::Public, {});
        slideText.method<&AsposePhp::SlideText::get_Text>("get_Text", {});
        slideText.method<&AsposePhp::SlideText::get_MasterText>("get_MasterText", {});
        slideText.method<&AsposePhp::SlideText::get_LayoutText>("get_LayoutText", {});
        slideText.method<&AsposePhp::SlideText::get_NotesText>("get_NotesText", {});
        
         // NotesSlideManager

        Php::Class<AsposePhp::NotesSlideManager> notesSlideManager("NotesSlideManager", 0);
        notesSlideManager.method<&AsposePhp::NotesSlideManager::__construct>("__construct", Php::Public, {});
        notesSlideManager.method<&AsposePhp::NotesSlideManager::get_NotesSlide>("get_NotesSlide", Php::Public, {});


              
         // NotesSlide

        Php::Class<AsposePhp::NotesSlide> notesSlide("NotesSlide", 0);
        notesSlide.method<&AsposePhp::NotesSlide::__construct>("__construct", Php::Public, {});
        notesSlide.method<&AsposePhp::NotesSlide::get_NotesTextFrame>("get_NotesTextFrame", Php::Public, {});

                      
         // TextFrame

        Php::Class<AsposePhp::TextFrame> textFrame("TextFrame", 0);
        textFrame.method<&AsposePhp::TextFrame::__construct>("__construct", Php::Public, {});
        textFrame.method<&AsposePhp::TextFrame::get_Text>("get_Text", Php::Public, {});
        
        // ShapeCollection

        Php::Class<AsposePhp::ShapeCollection> shapeCollection("ShapeCollection", 0);
        shapeCollection.method<&AsposePhp::ShapeCollection::__construct>("__construct", Php::Public, {});
        shapeCollection.method<&AsposePhp::ShapeCollection::ToArray>("ToArray", Php::Public, {});
        
         // Shape

        Php::Class<AsposePhp::Shape> shape("Shape", 0);
        shape.method<&AsposePhp::Shape::__construct>("__construct", Php::Public, {});
        shape.method<&AsposePhp::Shape::isTable>("isTable", Php::Public, {});
        shape.method<&AsposePhp::Shape::isChart>("isChart", Php::Public, {});
        shape.method<&AsposePhp::Shape::isGroupShape>("isGroupShape", Php::Public, {});
        shape.method<&AsposePhp::Shape::get_AlternativeText>("get_AlternativeText", Php::Public, {});
        
        // GroupShape

        Php::Class<AsposePhp::GroupShape> groupShape("GroupShape", 0);
        groupShape.method<&AsposePhp::GroupShape::__construct>("__construct", Php::Public, {});
        groupShape.method<&AsposePhp::GroupShape::get_Shapes>("get_Shapes", Php::Public, {});
        
        // Chart

        Php::Class<AsposePhp::Chart> chart("Chart", 0);
        chart.method<&AsposePhp::Chart::__construct>("__construct", Php::Public, {});
        chart.method<&AsposePhp::Chart::get_ChartData>("get_ChartData", Php::Public, {});
        chart.method<&AsposePhp::Chart::get_AlternativeText>("get_AlternativeText", Php::Public, {});

         // Table

        Php::Class<AsposePhp::Table> table("Table", 0);
        table.method<&AsposePhp::Table::__construct>("__construct", Php::Public, {});
        //chart.method<&AsposePhp::Table::get_ChartData>("get_ChartData", Php::Public, {});


        // ChartData

        Php::Class<AsposePhp::ChartData> chartData("ChartData", 0);
        chartData.method<&AsposePhp::ChartData::__construct>("__construct", Php::Public, {});
        chartData.method<&AsposePhp::ChartData::get_Series>("get_Series", Php::Public, {});
        chartData.method<&AsposePhp::ChartData::get_Categories>("get_Categories", Php::Public, {});
        
        
         // ChartSeriesCollection

        Php::Class<AsposePhp::ChartSeriesCollection> chartSeriesCol("ChartSeriesCollection", 0);
        chartSeriesCol.method<&AsposePhp::ChartSeriesCollection::__construct>("__construct", Php::Public, {});
        chartSeriesCol.method<&AsposePhp::ChartSeriesCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartSeriesCol.method<&AsposePhp::ChartSeriesCollection::get_Count>("get_Count", Php::Public, {});
    
       
        // ChartSeries

        Php::Class<AsposePhp::ChartSeries> chartSeries("ChartSeries", 0);
        chartSeries.method<&AsposePhp::ChartSeries::__construct>("__construct", Php::Public, {});
        chartSeries.method<&AsposePhp::ChartSeries::get_Name>("get_Name", Php::Public, {});
        chartSeries.method<&AsposePhp::ChartSeries::get_DataPoints>("get_DataPoints", Php::Public, {});
    

       // ChartCategoryCollection

        Php::Class<AsposePhp::ChartCategoryCollection> chartCategoryCol("ChartCategoryCollection", 0);
        chartCategoryCol.method<&AsposePhp::ChartCategoryCollection::__construct>("__construct", Php::Public, {});
        chartCategoryCol.method<&AsposePhp::ChartCategoryCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartCategoryCol.method<&AsposePhp::ChartCategoryCollection::get_Count>("get_Count", Php::Public, {});
    
        // ChartCategory

        Php::Class<AsposePhp::ChartCategory> chartCategory("ChartCategory", 0);
        chartCategory.method<&AsposePhp::ChartCategory::__construct>("__construct", Php::Public, {});
        chartCategory.method<&AsposePhp::ChartCategory::get_UseCell>("get_UseCell", Php::Public, {});
        chartCategory.method<&AsposePhp::ChartCategory::get_AsCell>("get_AsCell", Php::Public, {});
    
        // ChartDataCell

        Php::Class<AsposePhp::ChartDataCell> chartDataCell("ChartDataCell", 0);
        chartDataCell.method<&AsposePhp::ChartDataCell::__construct>("__construct", Php::Public, {});
        chartDataCell.method<&AsposePhp::ChartDataCell::get_Value>("get_Value", Php::Public, {});
    
        // StringChartValue

        Php::Class<AsposePhp::StringChartValue> stringChartValue("StringChartValue", 0);
        stringChartValue.method<&AsposePhp::StringChartValue::__construct>("__construct", Php::Public, {});
        // chartDataCell.method<&AsposePhp::StringChartValue::get_Value>("get_Value", Php::Public, {});
    
        // ChartCellCollection

        Php::Class<AsposePhp::ChartCellCollection> chartCellCol("ChartCellCollection", 0);
        chartCellCol.method<&AsposePhp::ChartCellCollection::__construct>("__construct", Php::Public, {});
        chartCellCol.method<&AsposePhp::ChartCellCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartCellCol.method<&AsposePhp::ChartCellCollection::get_Count>("get_Count", Php::Public, {});
    

        // ChartDataPointCollection

        Php::Class<AsposePhp::ChartDataPointCollection> chartDataPointCol("ChartDataPointCollection", 0);
        chartDataPointCol.method<&AsposePhp::ChartDataPointCollection::__construct>("__construct", Php::Public, {});
        chartDataPointCol.method<&AsposePhp::ChartDataPointCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartDataPointCol.method<&AsposePhp::ChartDataPointCollection::get_Count>("get_Count", Php::Public, {});
    
         // ChartDataPoint

        Php::Class<AsposePhp::ChartDataPoint> chartDataPoint("ChartDataPoint", 0);
        chartDataPoint.method<&AsposePhp::ChartDataPoint::__construct>("__construct", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_Label>("get_Label", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_Value>("get_Value", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_YValue>("get_YValue", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_XValue>("get_XValue", Php::Public, {});

        // DataLabel

        Php::Class<AsposePhp::DataLabel> dataLabel("DataLabel", 0);
        dataLabel.method<&AsposePhp::DataLabel::__construct>("__construct", Php::Public, {});
        dataLabel.method<&AsposePhp::DataLabel::get_TextFrameForOverriding>("get_TextFrameForOverriding", Php::Public, {});
        dataLabel.method<&AsposePhp::DataLabel::GetActualLabelText>("GetActualLabelText", Php::Public, {});

        // DoubleChartValue

        Php::Class<AsposePhp::DoubleChartValue> doubleChartValue("DoubleChartValue", 0);
        doubleChartValue.method<&AsposePhp::DoubleChartValue::__construct>("__construct", Php::Public, {});
        doubleChartValue.method<&AsposePhp::DoubleChartValue::get_AsCell>("get_AsCell", Php::Public, {});
        //dataLabel.method<&AsposePhp::DataLabel::GetActualLabelText>("GetActualLabelText", Php::Public, {});

        // StringOrDoubleChartValue

        Php::Class<AsposePhp::StringOrDoubleChartValue> stringOrdoubleChartValue("StringOrDoubleChartValue", 0);
        stringOrdoubleChartValue.method<&AsposePhp::StringOrDoubleChartValue::__construct>("__construct", Php::Public, {});
        stringOrdoubleChartValue.method<&AsposePhp::StringOrDoubleChartValue::get_AsCell>("get_AsCell", Php::Public, {});
        //dataLabel.method<&AsposePhp::DataLabel::GetActualLabelText>("GetActualLabelText", Php::Public, {});

        // AsposeUtil

        Php::Class<AsposeUtil> util("AsposeUtil");

        util.method<&AsposeUtil::getVersion>("getVersion", { 
            Php::ByVal("slideNo", Php::Type::Numeric, true) 
        });

        // Slide

        Php::Class<AsposePhp::Slide> slide("Slide");

        slide.method<&AsposePhp::Slide::get_Shapes>("get_Shapes", {});
        slide.method<&AsposePhp::Slide::getSlideNumber>("getSlideNumber", {});
        slide.method<&AsposePhp::Slide::getSlideText>("getSlideText", {});
        slide.method<&AsposePhp::Slide::getLayoutText>("getLayoutText", {});
        slide.method<&AsposePhp::Slide::getMasterText>("getMasterText", {});
        slide.method<&AsposePhp::Slide::getNotesText>("getNotesText", {});
        slide.method<&AsposePhp::Slide::get_NotesSlideManager>("get_NotesSlideManager", {});


        ns.add<AsposeUtil>("AsposeUtil");
        ns.add<AsposePhp::Presentation>("Presentation");
        ns.add<AsposePhp::PresentationFactory>("PresentationFactory");
        ns.add<AsposePhp::Slide>("Slide");
        
        extension.add(std::move(stringOrdoubleChartValue));
        extension.add(std::move(doubleChartValue));
        extension.add(std::move(dataLabel));
        extension.add(std::move(chartDataPoint));
        extension.add(std::move(chartDataPointCol));
        extension.add(std::move(chartCellCol));
        extension.add(std::move(stringChartValue));
        extension.add(std::move(chartDataCell));
        extension.add(std::move(chartCategory));
        extension.add(std::move(chartCategoryCol));
        extension.add(std::move(chartSeries));
        extension.add(std::move(chartSeriesCol));
        extension.add(std::move(table));
        extension.add(std::move(chartData));
        extension.add(std::move(chart));
        extension.add(std::move(groupShape));
        extension.add(std::move(shape));
        extension.add(std::move(shapeCollection));
        extension.add(std::move(textFrame));
        extension.add(std::move(notesSlide));
        extension.add(std::move(notesSlideManager));
        extension.add(std::move(slideText));
        extension.add(std::move(presentationFactory));
        extension.add(std::move(presentationText));
        extension.add(std::move(col));
        extension.add(std::move(util));
        extension.add(std::move(slide));
        extension.add(std::move(pres));
        extension.add(std::move(ns));

        return extension;
    }
}
