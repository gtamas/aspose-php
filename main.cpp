#include <phpcpp.h>
#include <ctime>


#include <system/string.h>
#include <system/io/file.h>
#include <system/io/file_mode.h>
#include <system/io/file_stream.h>
#include <system/math.h>

#include <DOM/Presentation.h>
#include <DOM/LoadOptions.h>
#include <DOM/ShapeType.h>
#include <DOM/IShapeCollection.h>
#include <DOM/ISlideCollection.h>
#include <DOM/ISectionCollection.h>
#include <DOM/BlobManagementOptions.h>
#include <DOM/PictureFillMode.h>
#include <DOM/IImageCollection.h>
#include <DOM/IVideoCollection.h>
#include <DOM/IMasterSlideCollection.h>
#include <DOM/IPictureFrame.h>
#include <DOM/IPictureFrameLock.h>
#include <DOM/IConnectorLock.h>
#include <DOM/IConnector.h>
#include <DOM/IGroupShapeLock.h>
#include <DOM/IGroupShape.h>
#include <DOM/IAutoShapeLock.h>
#include <DOM/IAutoShape.h>
#include <DOM/IAutoShapeLock.h>
#include <DOM/IProtectionManager.h>
#include <DOM/IBackgroundEffectiveData.h>
#include <DOM/IFillFormatEffectiveData.h>
#include <DOM/FillType.h>
#include <DOM/BackgroundType.h>
#include <DOM/IBackground.h>
#include <DOM/IFillFormat.h>
#include <DOM/IGradientFormat.h>
#include <DOM/FillType.h>
#include <DOM/IPictureFillFormat.h>
#include <DOM/ISlidesPicture.h>
#include <DOM/IColorFormat.h>
#include <DOM/ICommentAuthorCollection.h>
#include <DOM/ICommentCollection.h>
#include <DOM/IGlobalLayoutSlideCollection.h>
#include <DOM/ILayoutSlide.h>
#include <DOM/SlideLayoutType.h>
#include <DOM/IMasterLayoutSlideCollection.h>
#include <DOM/IMasterNotesSlide.h>
#include <DOM/BulletType.h>
#include <DOM/IMasterNotesSlideManager.h>
#include <DOM/ITextStyle.h>
#include <DOM/IParagraphFormat.h>
#include <DOM/IBulletFormat.h>
#include <DOM/SlideSizeScaleType.h>
#include <DOM/ISlideSize.h>
#include <DOM/IMasterHandoutSlide.h>
#include <DOM/IMasterHandoutSlideManager.h>
#include <DOM/IBaseSlideHeaderFooterManager.h>
#include <DOM/ISlideHeaderFooterManager.h>
#include <DOM/IPresentationHeaderFooterManager.h>
#include <DOM/IMasterHandoutSlideHeaderFooterManager.h>
#include <DOM/IMasterSlideHeaderFooterManager.h>
#include <DOM/INotesSlide.h>
#include <DOM/INotesSlideManager.h>
#include <DOM/IMasterNotesSlideHeaderFooterManager.h>
#include <DOM/INotesSlideHeaderFooterManager.h>
#include <DOM/Hyperlink.h>
#include <DOM/ITextFrame.h>
#include <DOM/IParagraphCollection.h>
#include <DOM/IPortion.h>
#include <DOM/Portion.h>
#include <DOM/IPortionCollection.h>
#include <DOM/IPortionFormat.h>
#include <DOM/PortionFormat.h>
#include <DOM/IHyperlinkQueries.h>
#include <DOM/HyperlinkColorSource.h>
#include <DOM/SlideSizeType.h>
#include <DOM/SlideSizeScaleType.h>
#include <DOM/VideoFrame.h>
#include <DOM/IChart.h>
#include "DOM/ColorTransformOperation.h"
#include "DOM/TextShapeType.h"
#include "DOM/RectangleAlignment.h"
#include "DOM/MaterialPresetType.h"
#include "DOM/IColorOperationCollection.h"
#include "DOM/Effects/IReflection.h"
#include "DOM/Effects/IGlow.h"
#include <DOM/Chart/ChartType.h>
#include <DOM/Chart/ChartTitle.h>
#include <DOM/Chart/IChartData.h>
#include <DOM/Chart/IChartCategoryCollection.h>
#include <DOM/Chart/IChartDataWorkbook.h>
#include <DOM/Chart/IChartSeriesCollection.h>
#include <DOM/Chart/IChartDataPointCollection.h>
#include <DOM/Chart/QuartileMethodType.h>
#include <DOM/Chart/IChartTextFormat.h>
#include <DOM/Chart/IChartPortionFormat.h>
#include <DOM/Chart/IChartDataPointCollection.h>
#include <DOM/Chart/IFormat.h>
#include <DOM/Chart/IChartSeriesCollection.h>
#include <DOM/Chart/IChartSeries.h>
#include <DOM/Chart/IChartDataPoint.h>
#include <DOM/Chart/IChartDataPointLevelsManager.h>
#include <DOM/Chart/IChartDataPointLevel.h>
#include <DOM/Chart/IDataLabelFormat.h>
#include <DOM/Chart/IDataLabel.h>
#include <DOM/Chart/ErrorBarValueType.h>
#include <DOM/Chart/IErrorBarsFormat.h>
#include <DOM/Chart/IDataSourceTypeForErrorBarsCustomValues.h>
#include <DOM/Chart/IErrorBarsCustomValues.h>
#include <DOM/Chart/IDoubleChartValue.h>
#include <DOM/Chart/DataSourceType.h>
#include <DOM/Chart/IChartSeriesGroup.h>
#include <DOM/Chart/IChartTextBlockFormat.h>
#include <DOM/Chart/ErrorBarType.h>
#include <DOM/Chart/AxisAggregationType.h>
#include <DOM/Chart/IAxesManager.h>
#include <DOM/Chart/IAxis.h>
#include <DOM/Chart/IUpDownBarsManager.h>
#include <DOM/Chart/IChartSeriesGroupCollection.h>
#include <DOM/Chart/IChartLinesFormat.h>
#include <DOM/Chart/IChartCategoryLevelsManager.h>
#include <DOM/Chart/IDataLabelCollection.h>
#include <DOM/Chart/ParentLabelLayoutType.h>
#include <DOM/Chart/Chart.h>
#include <DOM/Chart/LegendPositionType.h>
#include <DOM/Animation/ISequence.h>
#include <DOM/Animation/EffectType.h>
#include <DOM/Animation/EffectSubtype.h>
#include <DOM/Animation/EffectTriggerType.h>
#include <DOM/Animation/EffectChartMinorGroupingType.h>
#include <DOM/Animation/AnimationTimeLine.h>
#include <DOM/Animation/Sequence.h>
#include <DOM/Animation/EffectChartMajorGroupingType.h>
#include <DOM/Animation/EffectPresetClassType.h>
#include <DOM/Animation/ISequenceCollection.h>
#include <DOM/Animation/MotionEffect.h>
#include <DOM/Animation/IBehaviorCollection.h>
#include <DOM/Animation/MotionCommandPathType.h>
#include <DOM/Animation/MotionPathPointsType.h>
#include <DOM/Animation/IMotionPath.h>
#include <DOM/Chart/CategoryAxisType.h>
#include <DOM/Chart/TimeUnitType.h>
#include <DOM/Chart/TickLabelPositionType.h>
#include <DOM/Chart/ILegend.h>
#include <DOM/Chart/IChartWall.h>
#include <DOM/Chart/IChartPlotArea.h>
#include <DOM/Chart/DisplayUnitType.h>
#include <DOM/IColorFormat.h>
#include <DOM/Chart/ITrendline.h>
#include <DOM/Chart/ITrendlineCollection.h>
#include <DOM/Chart/TrendlineType.h>
#include <DOM/Chart/IChartDataCell.h>
#include <DOM/Chart/IStringOrDoubleChartValue.h>
#include <DOM/Chart/ChartData.h>
#include <DOM/Chart/IMarker.h>
#include <DOM/Chart/MarkerStyleType.h>
#include <DOM/Chart/LegendDataLabelPosition.h>
#include <DOM/Chart/IRotation3D.h>
#include <DOM/ITextFrameFormat.h>
#include <DOM/Chart/PieSplitType.h>
#include <DOM/Chart/LayoutTargetType.h>
#include <DOM/Chart/IDataTable.h>
#include <DOM/Chart/ILegendEntryCollection.h>
#include <DOM/Chart/ILegendEntryProperties.h>
#include <DOM/Chart/BubbleSizeRepresentationType.h>
#include <DOM/TileFlip.h>
#include <DOM/GroupShape.h>
#include <DOM/LineArrowheadLength.h>
#include <DOM/LineArrowheadStyle.h>
#include <DOM/AutoShape.h>
#include <DOM/IShapeFrame.h>
#include <DOM/Connector.h>
#include <DOM/LineJoinStyle.h>
#include <DOM/LineStyle.h>
#include <DOM/LineDashStyle.h>
#include <DOM/OleObjectFrame.h>
#include <DOM/IAudioFrame.h>
#include <DOM/AudioPlayModePreset.h>
#include <DOM/AudioVolumeMode.h>
#include <DOM/IOleObjectFrame.h>
#include <DOM/VideoPlayModePreset.h>
#include <DOM/ISvgImage.h>
#include <DOM/SvgImage.h>
#include <DOM/IOleEmbeddedDataInfo.h>
#include <DOM/IThreeDFormat.h>
#include <DOM/ICamera.h>
#include <DOM/LightRigPresetType.h>
#include <DOM/CameraPresetType.h>
#include <DOM/ILightRig.h>
#include <DOM/LightingDirection.h>
#include <DOM/IShapeBevel.h>
#include <DOM/BevelPresetType.h>
#include <DOM/ShapeThumbnailBounds.h>
#include <DOM/ShapeFrame.h>
#include <DOM/SmartArt/ISmartArtNode.h>
#include <DOM/SmartArt/ISmartArt.h>
#include <DOM/SmartArt/SmartArtLayoutType.h>
#include <DOM/SmartArt/ISmartArtNodeCollection.h>
#include <DOM/SmartArt/ISmartArtShapeCollection.h>
#include <DOM/SmartArt/SmartArt.h>
#include <DOM/SmartArt/SmartArtNode.h>
#include <DOM/SmartArt/SmartArtQuickStyleType.h>
#include <DOM/SmartArt/SmartArtShape.h>
#include <DOM/SmartArt/OrganizationChartLayoutType.h>
#include <DOM/SmartArt/SmartArtColorType.h>
#include <DOM/GradientFormat.h>
#include <DOM/GradientShape.h>
#include <DOM/GradientStop.h>
#include <DOM/GradientDirection.h>
#include <DOM/GradientStopCollection.h>
#include <DOM/PresetColor.h>
#include <DOM/IPatternFormat.h>
#include <DOM/PatternStyle.h>
#include <DOM/Table/ITable.h>
#include <DOM/Table/Table.h>
#include <DOM/Table/ICell.h>
#include <DOM/Table/ICellCollection.h>
#include <DOM/Table/IRow.h>
#include <DOM/Table/IRowCollection.h>
#include <DOM/Table/IColumnCollection.h>
#include <DOM/Table/IRowFormatEffectiveData.h>
#include <DOM/Table/ITableFormatEffectiveData.h>
#include <DOM/Table/ICellFormatEffectiveData.h>
#include <DOM/Table/IColumnFormatEffectiveData.h>
#include <DOM/Table/TableFormat.h>
#include <DOM/Table/ITableFormat.h>
#include <DOM/Table/IColumnFormat.h>
#include <DOM/Table/IRowFormat.h>
#include <DOM/Table/ICellFormat.h>
#include <DOM/AutoShapeLock.h>
#include <DOM/IGraphicalObjectLock.h>
#include <DOM/IGraphicalObject.h>
#include <DOM/TextAnchorType.h>
#include <DOM/TextVerticalType.h>
#include <DOM/Fonts/FontData.h>
#include <DOM/IFontData.h>
#include <DOM/IFontsManager.h>
#include <DOM/Paragraph.h>
#include <DOM/IParagraph.h>
#include <DOM/IEffectFormat.h>
#include <DOM/Effects/IInnerShadow.h>
#include <DOM/ColorType.h>
#include <DOM/SchemeColor.h>
#include <DOM/Effects/IOuterShadow.h>
#include <DOM/IParagraphFormatEffectiveData.h>
#include <DOM/IParagraphFormat.h>
#include <DOM/IBulletFormat.h>
#include <DOM/IBulletFormatEffectiveData.h>
#include <DOM/IPortionFormatEffectiveData.h>
#include <DOM/ITextStyleEffectiveData.h>
#include <DOM/IParagraphFormatEffectiveData.h>
#include <DOM/Fonts/FontFallBackRulesCollection.h>
#include <DOM/Fonts/FontFallBackRule.h>
#include <DOM/TextUnderlineType.h>
#include <DOM/Fonts/FontsLoader.h>
#include <DOM/Fonts/FontSubstRuleCollection.h>
#include <DOM/Fonts/FontSubstRule.h>
#include <DOM/FontSubstCondition.h>
#include <DOM/FontAlignment.h>
#include <DOM/TextAlignment.h>
#include <DOM/TextHighlightingOptions.h>
#include <DOM/NumberedBulletStyle.h>
#include <DOM/IHyperlinkManager.h>
#include <DOM/SlideShowTransition/TransitionType.h>
#include <DOM/ISlideShowTransition.h>
#include <DOM/SlideShowTransition/OptionalBlackTransition.h>
#include <DOM/SlideShowTransition/TransitionMorphType.h>
#include <DOM/SlideShowTransition/IMorphTransition.h>
#include <DOM/Vba/VbaProject.h>
#include <DOM/Vba/IVbaModule.h>
#include <DOM/Vba/IVbaModuleCollection.h>
#include <DOM/Vba/VbaReferenceOleTypeLib.h>
#include <DOM/Vba/IVbaReferenceCollection.h>
#include <DOM/PlaceholderType.h>
#include <DOM/IPlaceholder.h>
#include <DOM/IThreeDFormat.h>
#include <DOM/IThreeDFormatEffectiveData.h>
#include <DOM/ICameraEffectiveData.h>
#include <DOM/ILightRigEffectiveData.h>
#include <DOM/IShapeBevelEffectiveData.h>
#include <DOM/ITextFrameFormatEffectiveData.h>
#include <DOM/SplitterBarStateType.h>
#include <DOM/IViewProperties.h>
#include <DOM/INormalViewProperties.h>
#include <DOM/INormalViewRestoredProperties.h>
#include <DOM/LineStyle.h>
#include <DOM/LineDashStyle.h>
#include <DOM/TextAutofitType.h>
#include <DOM/ILineFormat.h>
#include <DOM/Fonts/FontData.h>
#include <DOM/ILineFillFormat.h>
#include <DOM/MathText/MathPortion.h>
#include <DOM/MathText/MathematicalText.h>
#include <DOM/MathText/IMathSuperscriptElement.h>
#include <DOM/MathText/IMathParagraph.h>
#include <DOM/MathText/IMathBlock.h>
#include <DOM/ShapesAlignmentType.h>
#include <DOM/DigitalSignature.h>
#include <DOM/IDigitalSignatureCollection.h>
#include <DOM/LineSketchType.h>
#include <DOM/ISketchFormat.h>
#include <DOM/IGradientFormatEffectiveData.h>
#include <DOM/IGradientStopCollectionEffectiveData.h>
#include <DOM/IPatternFormatEffectiveData.h>

#include <Import/ExternalResourceResolver.h>
#include <Import/IExternalResourceResolver.h>

#include <Util/SlideUtil.h>

using namespace Aspose::Slides;
using namespace System;

Php::Value cpp_date()
{
     std::time_t result = std::time(nullptr);
	return std::asctime(std::localtime(&result));
}


Php::Value aspose_count_slides(Php::Parameters &params)
{

    char buffer [50];
    Php::Value path = params[0];
	const String templatePath = String(path.stringValue());

	SharedPtr<LoadOptions> loadOptions = MakeObject<LoadOptions>();
	SharedPtr<Presentation> pres = MakeObject<Presentation>(templatePath);

	sprintf(buffer, "Total slides inside presentation are : %d\n", pres->get_Slides()->get_Count());

    return buffer;
}


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
        static Php::Extension extension("pptparser", "1.0");

        extension.add<cpp_date>("cpp_date");
        extension.add<aspose_count_slides>("aspose_count_slides", {
            Php::ByVal("path", Php::Type::String)
        });

        return extension;
    }
}
