# aspose-php
Aspose PHP extension

### Install

Download Aspose Slides C++ library package from [this page](https://products.aspose.com/slides/cpp) and unzip it somewhere.

Then create the ASPOSE_PATH env variable and point it to the unzipped package.

```
export ASPOSE_PATH=/some/path
```

Then install [PHP-CPP](https://www.php-cpp.com/)

Finally, run this:

```
./make.sh
```

### API

**Global methods**

| name  | desc  | 
|---|---|---|---|---|
| aspose_get_version()  |  returns major.minor version |

**PowerPoint class**

| name  | desc  | 
|---|---|---|---|---|
| open(filePath)  |  Opens PPT file |
| countSlides() Returns slide count  |
