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

        // Presentation class

        Php::Class<AsposePhp::Presentation> pres("AsposePhp\\Slides\\Presentation", 0);

        pres.method<&AsposePhp::Presentation::load>("load", { 
            Php::ByVal("path", Php::Type::String, true) 
        });
        pres.method<&AsposePhp::Presentation::__construct>("__construct", Php::Public, { 
            Php::ByVal("path", Php::Type::String, false),
            Php::ByVal("licensePath", Php::Type::String, false)  
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

        Php::Class<AsposePhp::ISlideCollection> col("AsposePhp\\Slides\\ISlideCollection");

        col.method<&AsposePhp::ISlideCollection::size>("size", {});
        col.method<&AsposePhp::ISlideCollection::get_Item>("get_Item", {});


        // PresentationFactory

        Php::Class<AsposePhp::PresentationFactory> presentationFactory("AsposePhp\\Slides\\PresentationFactory", 0);
        
        presentationFactory.method<&AsposePhp::PresentationFactory::__construct>("__construct", Php::Public, {});
        presentationFactory.method<&AsposePhp::PresentationFactory::GetPresentationText>("GetPresentationText",{ 
            Php::ByVal("path", Php::Type::String, true) 
        });


        // PresentationText

        Php::Class<AsposePhp::PresentationText> presentationText("AsposePhp\\Slides\\PresentationText", 0);
        presentationText.method<&AsposePhp::PresentationText::__construct>("__construct", Php::Public, {});
        presentationText.method<&AsposePhp::PresentationText::get_SlidesText>("get_SlidesText", Php::Public, {});
        
         // SlideText

        Php::Class<AsposePhp::SlideText> slideText("AsposePhp\\Slides\\SlideText", 0);
        slideText.method<&AsposePhp::SlideText::__construct>("__construct", Php::Public, {});
        slideText.method<&AsposePhp::SlideText::get_Text>("get_Text", {});
        slideText.method<&AsposePhp::SlideText::get_MasterText>("get_MasterText", {});
        slideText.method<&AsposePhp::SlideText::get_LayoutText>("get_LayoutText", {});
        slideText.method<&AsposePhp::SlideText::get_NotesText>("get_NotesText", {});
        
         // NotesSlideManager

        Php::Class<AsposePhp::NotesSlideManager> notesSlideManager("AsposePhp\\Slides\\NotesSlideManager", 0);
        notesSlideManager.method<&AsposePhp::NotesSlideManager::__construct>("__construct", Php::Public, {});
        notesSlideManager.method<&AsposePhp::NotesSlideManager::get_NotesSlide>("get_NotesSlide", Php::Public, {});


              
         // NotesSlide

        Php::Class<AsposePhp::NotesSlide> notesSlide("AsposePhp\\Slides\\NotesSlide", 0);
        notesSlide.method<&AsposePhp::NotesSlide::__construct>("__construct", Php::Public, {});
        notesSlide.method<&AsposePhp::NotesSlide::get_NotesTextFrame>("get_NotesTextFrame", Php::Public, {});

                      
         // TextFrame

        Php::Class<AsposePhp::TextFrame> textFrame("AsposePhp\\Slides\\TextFrame", 0);
        textFrame.method<&AsposePhp::TextFrame::__construct>("__construct", Php::Public, {});
        textFrame.method<&AsposePhp::TextFrame::get_Text>("get_Text", Php::Public, {});
        textFrame.method<&AsposePhp::TextFrame::set_Text>("set_Text", Php::Public, {
             Php::ByVal("text", Php::Type::String, true),
        });
        
        // ShapeCollection

        Php::Class<AsposePhp::ShapeCollection> shapeCollection("AsposePhp\\Slides\\ShapeCollection", 0);
        shapeCollection.method<&AsposePhp::ShapeCollection::__construct>("__construct", Php::Public, {});
        shapeCollection.method<&AsposePhp::ShapeCollection::ToArray>("ToArray", Php::Public, {});
        
         // Shape

        Php::Class<AsposePhp::Shape> shape("AsposePhp\\Slides\\Shape", 0);
        shape.method<&AsposePhp::Shape::__construct>("__construct", Php::Public, {});
        shape.method<&AsposePhp::Shape::isTable>("isTable", Php::Public, {});
        shape.method<&AsposePhp::Shape::isChart>("isChart", Php::Public, {});
        shape.method<&AsposePhp::Shape::isGroupShape>("isGroupShape", Php::Public, {});
        shape.method<&AsposePhp::Shape::get_AlternativeText>("get_AlternativeText", Php::Public, {});
        
        // GroupShape

        Php::Class<AsposePhp::GroupShape> groupShape("AsposePhp\\Slides\\GroupShape", 0);
        groupShape.method<&AsposePhp::GroupShape::__construct>("__construct", Php::Public, {});
        groupShape.method<&AsposePhp::GroupShape::get_Shapes>("get_Shapes", Php::Public, {});
        groupShape.method<&AsposePhp::GroupShape::get_AlternativeText>("get_AlternativeText", Php::Public, {});
        groupShape.method<&AsposePhp::GroupShape::isGroupShape>("isGroupShape", Php::Public, {});
        groupShape.method<&AsposePhp::GroupShape::isChart>("isChart", Php::Public, {});
        groupShape.method<&AsposePhp::GroupShape::isTable>("isTable", Php::Public, {});
        
        // Chart

        Php::Class<AsposePhp::Chart> chart("AsposePhp\\Slides\\Charts\\Chart", 0);
        chart.method<&AsposePhp::Chart::__construct>("__construct", Php::Public, {});
        chart.method<&AsposePhp::Chart::get_ChartData>("get_ChartData", Php::Public, {});
        chart.method<&AsposePhp::Chart::get_AlternativeText>("get_AlternativeText", Php::Public, {});
        chart.method<&AsposePhp::Chart::isGroupShape>("isGroupShape", Php::Public, {});
        chart.method<&AsposePhp::Chart::isChart>("isChart", Php::Public, {});
        chart.method<&AsposePhp::Chart::isTable>("isTable", Php::Public, {});

         // Table

        Php::Class<AsposePhp::Table> table("AsposePhp\\Slides\\Table", 0);
        table.method<&AsposePhp::Table::__construct>("__construct", Php::Public, {});
        table.method<&AsposePhp::Table::isGroupShape>("isGroupShape", Php::Public, {});
        table.method<&AsposePhp::Table::get_AlternativeText>("get_AlternativeText", Php::Public, {});
        table.method<&AsposePhp::Table::isChart>("isChart", Php::Public, {});
        table.method<&AsposePhp::Table::isTable>("isTable", Php::Public, {});
        //chart.method<&AsposePhp::Table::get_ChartData>("get_ChartData", Php::Public, {});


        // ChartData

        Php::Class<AsposePhp::ChartData> chartData("AsposePhp\\Slides\\Charts\\ChartData", 0);
        chartData.method<&AsposePhp::ChartData::__construct>("__construct", Php::Public, {});
        chartData.method<&AsposePhp::ChartData::get_Series>("get_Series", Php::Public, {});
        chartData.method<&AsposePhp::ChartData::get_Categories>("get_Categories", Php::Public, {});
        
        
         // ChartSeriesCollection

        Php::Class<AsposePhp::ChartSeriesCollection> chartSeriesCol("AsposePhp\\Slides\\Charts\\ChartSeriesCollection", 0);
        chartSeriesCol.method<&AsposePhp::ChartSeriesCollection::__construct>("__construct", Php::Public, {});
        chartSeriesCol.method<&AsposePhp::ChartSeriesCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartSeriesCol.method<&AsposePhp::ChartSeriesCollection::get_Count>("get_Count", Php::Public, {});
    
       
        // ChartSeries

        Php::Class<AsposePhp::ChartSeries> chartSeries("AsposePhp\\Slides\\Charts\\ChartSeries", 0);
        chartSeries.method<&AsposePhp::ChartSeries::__construct>("__construct", Php::Public, {});
        chartSeries.method<&AsposePhp::ChartSeries::get_Name>("get_Name", Php::Public, {});
        chartSeries.method<&AsposePhp::ChartSeries::get_DataPoints>("get_DataPoints", Php::Public, {});
    

       // ChartCategoryCollection

        Php::Class<AsposePhp::ChartCategoryCollection> chartCategoryCol("AsposePhp\\Slides\\Charts\\ChartCategoryCollection", 0);
        chartCategoryCol.method<&AsposePhp::ChartCategoryCollection::__construct>("__construct", Php::Public, {});
        chartCategoryCol.method<&AsposePhp::ChartCategoryCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartCategoryCol.method<&AsposePhp::ChartCategoryCollection::get_Count>("get_Count", Php::Public, {});
    
        // ChartCategory

        Php::Class<AsposePhp::ChartCategory> chartCategory("AsposePhp\\Slides\\Charts\\ChartCategory", 0);
        chartCategory.method<&AsposePhp::ChartCategory::__construct>("__construct", Php::Public, {});
        chartCategory.method<&AsposePhp::ChartCategory::get_UseCell>("get_UseCell", Php::Public, {});
        chartCategory.method<&AsposePhp::ChartCategory::get_AsCell>("get_AsCell", Php::Public, {});
    
        // ChartDataCell

        Php::Class<AsposePhp::ChartDataCell> chartDataCell("AsposePhp\\Slides\\Charts\\ChartDataCell", 0);
        chartDataCell.method<&AsposePhp::ChartDataCell::__construct>("__construct", Php::Public, {});
        chartDataCell.method<&AsposePhp::ChartDataCell::get_Value>("get_Value", Php::Public, {});
    
        // StringChartValue

        Php::Class<AsposePhp::StringChartValue> stringChartValue("AsposePhp\\Slides\\Charts\\StringChartValue", 0);
        stringChartValue.method<&AsposePhp::StringChartValue::__construct>("__construct", Php::Public, {});
        stringChartValue.method<&AsposePhp::StringChartValue::get_AsCells>("get_AsCells", Php::Public, {});
    
        // ChartCellCollection

        Php::Class<AsposePhp::ChartCellCollection> chartCellCol("AsposePhp\\Slides\\Charts\\ChartCellCollection", 0);
        chartCellCol.method<&AsposePhp::ChartCellCollection::__construct>("__construct", Php::Public, {});
        chartCellCol.method<&AsposePhp::ChartCellCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartCellCol.method<&AsposePhp::ChartCellCollection::get_Count>("get_Count", Php::Public, {});
    

        // ChartDataPointCollection

        Php::Class<AsposePhp::ChartDataPointCollection> chartDataPointCol("AsposePhp\\Slides\\Charts\\ChartDataPointCollection", 0);
        chartDataPointCol.method<&AsposePhp::ChartDataPointCollection::__construct>("__construct", Php::Public, {});
        chartDataPointCol.method<&AsposePhp::ChartDataPointCollection::idx_get>("idx_get", Php::Public, { 
            Php::ByVal("index", Php::Type::Numeric, true) 
        });
        chartDataPointCol.method<&AsposePhp::ChartDataPointCollection::get_Count>("get_Count", Php::Public, {});
    
         // ChartDataPoint

        Php::Class<AsposePhp::ChartDataPoint> chartDataPoint("AsposePhp\\Slides\\Charts\\ChartDataPoint", 0);
        chartDataPoint.method<&AsposePhp::ChartDataPoint::__construct>("__construct", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_Label>("get_Label", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_Value>("get_Value", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_YValue>("get_YValue", Php::Public, {});
        chartDataPoint.method<&AsposePhp::ChartDataPoint::get_XValue>("get_XValue", Php::Public, {});

        // DataLabel

        Php::Class<AsposePhp::DataLabel> dataLabel("AsposePhp\\Slides\\Charts\\DataLabel", 0);
        dataLabel.method<&AsposePhp::DataLabel::__construct>("__construct", Php::Public, {});
        dataLabel.method<&AsposePhp::DataLabel::get_TextFrameForOverriding>("get_TextFrameForOverriding", Php::Public, {});
        dataLabel.method<&AsposePhp::DataLabel::GetActualLabelText>("GetActualLabelText", Php::Public, {});

        // DoubleChartValue

        Php::Class<AsposePhp::DoubleChartValue> doubleChartValue("AsposePhp\\Slides\\Charts\\DoubleChartValue", 0);
        doubleChartValue.method<&AsposePhp::DoubleChartValue::__construct>("__construct", Php::Public, {});
        doubleChartValue.method<&AsposePhp::DoubleChartValue::get_AsCell>("get_AsCell", Php::Public, {});
        //dataLabel.method<&AsposePhp::DataLabel::GetActualLabelText>("GetActualLabelText", Php::Public, {});

        // StringOrDoubleChartValue

        Php::Class<AsposePhp::StringOrDoubleChartValue> stringOrdoubleChartValue("AsposePhp\\Slides\\Charts\\StringOrDoubleChartValue", 0);
        stringOrdoubleChartValue.method<&AsposePhp::StringOrDoubleChartValue::__construct>("__construct", Php::Public, {});
        stringOrdoubleChartValue.method<&AsposePhp::StringOrDoubleChartValue::get_AsCell>("get_AsCell", Php::Public, {});
        //dataLabel.method<&AsposePhp::DataLabel::GetActualLabelText>("GetActualLabelText", Php::Public, {});

        // AsposeUtil

        Php::Class<AsposeUtil> util("AsposePhp\\AsposeUtil");

        util.method<&AsposeUtil::getVersion>("getVersion", {});

        // Slide

        Php::Class<AsposePhp::Slide> slide("AsposePhp\\Slides\\Slide");

        slide.method<&AsposePhp::Slide::get_Shapes>("get_Shapes", {});
        slide.method<&AsposePhp::Slide::getSlideNumber>("getSlideNumber", {});
        slide.method<&AsposePhp::Slide::getSlideText>("getSlideText", {});
        slide.method<&AsposePhp::Slide::getLayoutText>("getLayoutText", {});
        slide.method<&AsposePhp::Slide::getMasterText>("getMasterText", {});
        slide.method<&AsposePhp::Slide::getNotesText>("getNotesText", {});
        slide.method<&AsposePhp::Slide::get_NotesSlideManager>("get_NotesSlideManager", {});
        
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

        return extension;
    }
}
