<?php 

use AsposePhp\Slides\Presentation;
use AsposePhp\Slides\Util\SlideUtil;
use AsposePhp\Slides\PresentationFactory;
use AsposePhp\AsposeUtil;

try {
    $ppt = new Presentation("../asposeext/builder_template2.pptx", "./Aspose.Slides.C++.lic");

?>

cloned

Slides in file: <?php echo $ppt->getNumberOfSlides(); ?>

Text in file: <?php print_r($ppt->getPresentationText("../asposeext/example.pptx", "all", true)); ?>

Text in slide 0: <?php $fac = new PresentationFactory(); 
print_r($fac->GetPresentationText("../asposeext/pptexamples.ppt")->get_SlidesText()[0]->get_Text()); ?>

Notes Text in slide 0: <?php 
print_r($ppt->getSlides()->get_Item(0)->get_NotesSlideManager()->get_NotesSlide()->get_NotesTextFrame()->get_Text()); ?>

Chart series: <?php 
print_r($ppt->getSlides()->get_Item(1)->get_Shapes()->ToArray()[4]->get_ChartData()->get_Series()->idx_get(0)->get_DataPoints()->idx_get(0)->get_Marker()->get_Format()->get_Fill()); ?>

Pres test: <?php 
print_r($ppt->getSlides()->get_Item(1)->get_Shapes()->ToArray()[4]->get_ChartData()->get_Categories()->idx_get(0)); ?>

Pres slidesize  <?php $w = $ppt->get_SlideSize()->get_Size()->get_Width();?>
<?php $h = $ppt->get_SlideSize()->get_Size()->get_Height(); ?>

<?php print_r($w); ?>
<?php print_r($h); ?>

Thumbnail: <?php print_r($ppt->getSlides()->get_Item(0)->get_Shapes()->ToArray()); //print_r($ppt->getSlides()->get_Item(0)->GetThumbnailAsByteArray(1, 1, 'png')); ?>

LayoutSLide: <?php 
$masterSlide = $ppt->getSlides()->get_Item(0)->get_LayoutSlide()->get_MasterSlide();
print_r($masterSlide); ?>

Util <?php print_r(SlideUtil::GetAllTextBoxes($masterSlide)[0]->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)->get_Text()); ?>

<?php $ppt->cloneSlide(0); ?>

Aspose.Slides version: <?php echo AsposeUtil::getVersion(); 

//$ppt->save("/home/tamas/foo.pptx");

}
catch(Exception $e) {
    print_r($e->getMessage());
    exit(1);
}?>

