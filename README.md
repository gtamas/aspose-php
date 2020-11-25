<!-- vscode-markdown-toc -->
* 1. [Prerequisites](#prerequisites)
* 2. [Precompiled version](#precompiled-version)
* 3. [Install](#install)
* 4. [API](#api)
    * 4.1. [AsposeUtil class](#asposeutil-class)
        * 4.1.1. [static getVersion()](#static-getversion())
    * 4.2. [Presentation class](#presentation-class)
        * 4.2.1. [Presentation(filePath)](#presentation(filepath))
        * 4.2.2. [load(filePath)](#load(filepath))
        * 4.2.3. [getSlides()](#getslides())
        * 4.2.4. [getSlide(index)](#getslide(index))
        * 4.2.5. [getNumberOfSlides()](#getnumberofslides())
        * 4.2.6. [cloneSlide(index)](#cloneslide(index))
        * 4.2.7. [getPresentationText(filePath, type, arranged)](#getpresentationtext(filepath,-type,-arranged))
        * 4.2.8. [save(filePath)](#save(filepath))
    * 4.3. [Slide class](#slide-class)
        * 4.3.1. [getSlideText()](#getslidetext())
        * 4.3.2. [getMasterText()](#getmastertext())
        * 4.3.3. [getLayoutText()](#getlayouttext())
        * 4.3.4. [getNotesText()](#getnotestext())
        * 4.3.5. [getSlideNumber()](#getslidenumber())
    * 4.4. [PHP](#php)

<!-- vscode-markdown-toc-config
	numbering=true
	autoSave=true
	/vscode-markdown-toc-config -->
<!-- /vscode-markdown-toc -->
# aspose-php
Aspose PHP extension




##  1. <a name='prerequisites'></a>Prerequisites

* Ubuntu Linux 16.0+
* Aspose.Slides for C++ 20.10+
* PHP-CPP 2.2+
* Dev tools like make, g++ etc.
* Clang 3.x+
* PHP 7.0+

##  2. <a name='precompiled-version'></a>Precompiled version

You can find it in ./dist. This should work under Ubuntu Linux 16.0+. Just run the following (you might need sudo):

```
make install
```

##  3. <a name='install'></a>Install

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

##  4. <a name='api'></a>API

###  4.1. <a name='asposeutil-class'></a>AsposeUtil class

Contains useful utility methods.

####  4.1.1. <a name='static-getversion()'></a>static getVersion()

Returns the Aspose version major.minor

###  4.2. <a name='presentation-class'></a>Presentation class

Represents a PowerPoint presentation.

####  4.2.1. <a name='presentation(filepath)'></a>Presentation(filePath)

Constructor, creates instance.

Params:

* filePath (string) - optional: Opens PPT (or any supported format) file

####  4.2.2. <a name='load(filepath)'></a>load(filePath)

Loads a presentation. Needs to be called only if you passed no filePath to constructor.

Params:

* filePath (string) - optional: Opens PPT (or any supported format) file


####  4.2.3. <a name='getslides()'></a>getSlides()

Returns an array of all slides (AsposePhp::Slide).

####  4.2.4. <a name='getslide(index)'></a>getSlide(index)

Returns the AsposePhp::Slide instance whose slide number is index.

Params:

* index (int) - The index of the slide.

####  4.2.5. <a name='getnumberofslides()'></a>getNumberOfSlides()

Returns slide count.

####  4.2.6. <a name='cloneslide(index)'></a>cloneSlide(index)

Clones the desired slide, appends it to presentation.

Params:

* index (int) - The slide index, starting at 0.

####  4.2.7. <a name='getpresentationtext(filepath,-type,-arranged)'></a>getPresentationText(filePath, type, arranged) 

Returns all text for each slide in an array.

Params:

* filePath (string) - The file to read
* type (notes | master | layout | all) - What text to read. Options: "all" (everything), "notes" (notes text), "master" (master slide text), "layout" (layout text)
* arrange (bool) - If true tex will returned in an ordered way (starting a slide 0).


####  4.2.8. <a name='save(filepath)'></a>save(filePath) 

Saves the presentation to file. The format is defined by file extension.

* filePath (string) - The file to be saved.

###  4.3. <a name='slide-class'></a>Slide class

Represents a slide.

####  4.3.1. <a name='getslidetext()'></a>getSlideText() 

Returns all raw text from the slide.

####  4.3.2. <a name='getmastertext()'></a>getMasterText() 

Returns master text from the slide.

####  4.3.3. <a name='getlayouttext()'></a>getLayoutText() 

Returns layout text from the slide.

####  4.3.4. <a name='getnotestext()'></a>getNotesText() 

Returns notes text from the slide.

####  4.3.5. <a name='getslidenumber()'></a>getSlideNumber() 

Returns the slide number.



###  4.4. <a name='php'></a>PHP

See test.php for examples.

```
php ./test.php
```
