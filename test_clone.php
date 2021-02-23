<?php 

use AsposePhp\Slides\Presentation;

try {
    $ppt = new Presentation("./ppts/file.pptx", "./Aspose.Slides.C++.lic");
    $start = microtime(true);
    $slides = $ppt->getSlides();
    $slides->AddClone($slides->get_Item(0));
    $elapsed = microtime(true) - $start;

?>

cloned in <?php echo $elapsed ?> seconds.

<?php
}
catch(Exception $e) {
    print_r($e->getMessage());
    exit(1);
}?>

