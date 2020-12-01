<?php 

$ppt = new Presentation("../asposeext/example.pptx");
?>

cloned

Slides in file: <?php echo $ppt->getNumberOfSlides(); ?>

Text in file: <?php print_r($ppt->getPresentationText("../asposeext/example.pptx", "master", true)); ?>

Text in slide 0: <?php $fac = new PresentationFactory(); 
print_r($fac->GetPresentationText("../asposeext/pptexamples.ppt")->get_SlidesText()[0]->get_Text()); ?>

Notes Text in slide 0: <?php 
print_r($ppt->getSlides()->get_Item(0)->get_NotesSlideManager()->get_NotesSlide()->get_NotesTextFrame()->get_Text()); ?>

<?php $ppt->cloneSlide(0); ?>

Aspose.Slides version: <?php echo AsposeUtil::getVersion(); ?>

<?php //$ppt->save("../text.pptx"); ?>

