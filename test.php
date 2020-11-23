<?php 

$ppt = new Presentation("../asposeext/file.pptx"); ?>

Slides in file: <?php echo $ppt->slideCount(); ?>

Text in file: <?php print_r($ppt->getText("../asposeext/file.pptx", "master", false));

$ppt->cloneSlide(0); ?>

Aspose.Slides version: <?php echo AsposeUtil::getVersion(); ?>

<?php //$ppt->save("../text.pptx"); ?>

