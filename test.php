<?php 

$ppt = new Presentation("../asposeext/example.pptx"); ?>

Slides in file: <?php echo $ppt->getNumberOfSlides(); ?>

Text in file: <?php print_r($ppt->getPresentationText("../asposeext/example.pptx", "master", true)); ?>

Text in slide 0: <?php $fac = new PresentationFactory(); 
print_r($fac->GetPresentationText("../asposeext/pptexamples.ppt")->get_SlidesText()[0]->get_NotesText());

$ppt->cloneSlide(0); ?>

Aspose.Slides version: <?php echo AsposeUtil::getVersion(); ?>

<?php //$ppt->save("../text.pptx"); ?>

