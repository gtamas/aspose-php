<?php 

$ppt = new Presentation("../asposeext/file.pptx"); ?>

Slides in file: <?php echo $ppt->getNumberOfSlides(); ?>

Text in file: <?php print_r($ppt->getPresentationText("../asposeext/file.pptx", "master", true)); ?>

Text in slide 0: <?php echo $ppt->getSlide(0)->getNotesText();

$ppt->cloneSlide(0); ?>

Aspose.Slides version: <?php echo AsposeUtil::getVersion(); ?>

<?php //$ppt->save("../text.pptx"); ?>

