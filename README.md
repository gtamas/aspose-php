# aspose-php
Aspose PHP extension

### Prerequisites

* Ubuntu Linux 16.0+
* Aspose.Slides for C++ 20.10+
* PHP-CPP latest
* Dev tools like make, g++ etc.
* Clang 3.x+


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

**AsposeUtil class**

Ezek static methodok.

| name  | desc  | 
|-------|-------|
| getVersion()  |  returns major.minor version |

**Presentation class**

| name  | desc  | 
|-------|-------|
| new Presentation(filePath)  |  Opens PPT file |
| open(filePath)  |  Opens PPT file |
| countSlides()  | Returns slide count
| cloneSlide(index)  | Clones the desired slide, appends it to presentation
| save(outPath) | Saves the presentation in the given format


### PHP

See test.php for examples.

```
php ./test.php
```
