<?php 

use AsposePhp\Slides\Presentation;

try {
    $ppt = new Presentation("./ppts/file.pptx", "./Aspose.Slides.C++.lic");
    $start = microtime(true);
    $ppt->save("./xy.pptx", "pptx", false);
    $elapsed = microtime(true) - $start;

?>

exported in <?php echo $elapsed ?> seconds.

<?php
}
catch(Exception $e) {
    print_r($e->getMessage());
    exit(1);
}?>

