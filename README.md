<!-- vscode-markdown-toc -->
* 1. [Prerequisites](#prerequisites)
* 2. [Precompiled version](#precompiled-version)
* 3. [Compile from source](#compile-from-source)
* 4. [API](#api)
* 5. [PHP](#php)

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
##  3. <a name='compile-from-source'></a>Compile from source

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

Please see ./docs/index.html.

##  5. <a name='php'></a>PHP

See test.php for examples.

```
php ./test.php
```
