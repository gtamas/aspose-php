<?php 

use AsposePhp\Slides\Presentation;
use AsposePhp\Slides\PresentationFactory;
use AsposePhp\AsposeUtil;

try {
    $ppt = new Presentation("../asposeext/builder_template_v3.pptx", "./Aspose.Slides.C++.lic");


?>

cloned

Slides in file: <?php echo $ppt->getNumberOfSlides(); ?>

Text in file: <?php print_r($ppt->getPresentationText("../asposeext/example.pptx", "all", true)); ?>

Text in slide 0: <?php $fac = new PresentationFactory(); 
print_r($fac->GetPresentationText("../asposeext/pptexamples.ppt")->get_SlidesText()[0]->get_Text()); ?>

Notes Text in slide 0: <?php 
print_r($ppt->getSlides()->get_Item(0)->get_NotesSlideManager()->get_NotesSlide()->get_NotesTextFrame()->get_Text()); ?>

Chart series: <?php 
print_r($ppt->getSlides()->get_Item(1)->get_Shapes()->ToArray()[4]->get_ChartData()->get_Series()->idx_get(0)->get_DataPoints()->idx_get(0)); ?>

Pres test: <?php 
print_r($ppt->getSlides()->get_Item(1)->get_Shapes()->ToArray()[4]->get_ChartData()->get_Categories()->idx_get(0)); ?>

<?php $ppt->cloneSlide(0); ?>

Aspose.Slides version: <?php echo AsposeUtil::getVersion(); 

//$ppt->save("/home/tamas/foo.pptx");

}
catch(Exception $e) {
    print_r($e->getMessage());
    exit(1);
}?>

