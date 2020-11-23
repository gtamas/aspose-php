# aspose-php
Aspose PHP extension

- [aspose-php](#aspose-php)
  * [Prerequisites](#prerequisites)
  * [Install](#install)
  * [API](#api)
    + [AsposeUtil class](#asposeutil-class)
      - [static getVersion()](#static-getversion)
    + [Presentation class](#presentation-class)
      - [Presentation(filePath)](#presentationfilepath)
      - [countSlides()](#countslides)
      - [cloneSlide(index)](#cloneslideindex)
      - [getText(filePath, type, arranged)](#gettextfilepath-type-arranged)
      - [save(filePath)](#savefilepath)
  * [PHP](#php)


## Prerequisites

* Ubuntu Linux 16.0+
* Aspose.Slides for C++ 20.10+
* PHP-CPP 2.2+
* Dev tools like make, g++ etc.
* Clang 3.x+
* PHP 7.0+


## Install

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

## API

### AsposeUtil class

#### static getVersion()

Returns the Aspose version major.minor

### Presentation class

#### Presentation(filePath)

Constructor, creates instance.

Params:

* filePath (string) - optional: Opens PPT (or any supported format) file

#### countSlides()

Returns slide count

#### cloneSlide(index)

Clones the desired slide, appends it to presentation.

Params:

* index (int) - The slide index, starting at 0.

#### getText(filePath, type, arranged) 

Returns all text for each slide in an array.

Params:

* filePath (string) - The file to read
* type (notes | master | layout | all) - What text to read. Options: "all" (everything), "notes" (notes text), "master" (master slide text), "layout" (layout text)
* arrange (bool) - If true tex will returned in an ordered way (starting a slide 0).


#### save(filePath) 

Saves the presentation to file. The format is defined by file extension.

### PHP

See test.php for examples.

```
php ./test.php
```
