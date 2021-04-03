<!-- vscode-markdown-toc -->
* 1. [About the project](#about-the-project)
* 2. [Project status](#project-status)
* 3. [Prerequisites](#prerequisites)
* 4. [Precompiled version](#precompiled-version)
* 5. [Compile from source](#compile-from-source)
* 6. [API](#api)
* 7. [Known Aspose bugs](#known-aspose-bugs)
* 8. [PHP stubs](#php-stubs)
* 9. [Development](#development)

<!-- vscode-markdown-toc-config
	numbering=true
	autoSave=true
	/vscode-markdown-toc-config -->
<!-- /vscode-markdown-toc -->
# aspose-php
Aspose PHP extension

##  1. <a name='about-the-project'></a>About the project

The goal of this project is to make the Aspose.Slides C++ library available for PHP users by providing a PHP extension which acts as a proxy between the C++ and PHP.
This means (for the most part) you can use the C++ API directly in PHP, using the exact same syntax, classes and method names.
The actual functionality is provided by Aspose.Slides, this package just make it usable in PHP.

In order to achieve this goal, we have provided a proxy API which could be used to export any Aspose.Slides functionality to PHP.
The ultimate goal is to export all functionality. We would like to provide an automated mechanism for generating the necessary C++ code.

The project was created by [DashboardVision Inc](https://www.dashboardvision.com)

##  2. <a name='project-status'></a>Project status

The project is still just getting started. We currently have only a small set of API methods and classes exported to PHP. What's available should be already production ready, but currently a big part of the functionality is missing. 

A lot of things are already available though. You can read PPTs, extract text from slides, clone slides, read Charets and Tables, generate thumbnails and export the presentation to disk, just to name a few existing functions.

You can find information about all the exported APIs in [./docs/index.html]("./docs/index.html").

##  3. <a name='prerequisites'></a>Prerequisites

* Ubuntu Linux 16.0+
* Aspose.Slides for C++ 21.3+
* PHP-CPP 2.2+
* Dev tools like make, g++ etc.
* PHP 7.0+

##  4. <a name='precompiled-version'></a>Precompiled version

You can find it in ./dist. This should work under Ubuntu Linux 16.0+. Just run the following (you might need sudo):

```
sudo make install
```
##  5. <a name='compile-from-source'></a>Compile from source

Download Aspose Slides C++ library package from [this page](https://products.aspose.com/slides/cpp) and unzip it somewhere.

Then create the ASPOSE_PATH env variable and point it to the unzipped package.

```
export ASPOSE_PATH=/some/path
```

Then install [PHP-CPP](https://www.php-cpp.com/)

Finally, run this to build from scratch:

```
./make.sh -c 1
```

This will compile and install the extension from scratch.

If you make changes to the code and whish to build only changed files, you should run this command instead:

```
./make.sh
```

##  6. <a name='api'></a>API

Please see [./docs/index.html]("./docs/index.html").

##  7. <a name='known-aspose-bugs'></a>Known Aspose bugs

**Slide thumbnail generation doesn't work**.

In order to make preview image generation work (Slide::GetThumbnail()), you must edit /etc/fonts/fonts.conf 

```
sudo vim /etc/fonts/fonts.conf
```

and comment the following line:

```
<dir>~/.fonts</dir>
```

**Saving presentation to disk is slow**

In this case you should install some default fonts using the command below:

```
sudo apt install ttf-mscorefonts-installer
```


##  8. <a name='php-stubs'></a>PHP stubs

You can find stub files in ./stubs. These can be used to make intellisense work in IDEs like PHPStorm.
Please note that the generated stubs contain only the namespaces, methods and classes and some info about the arguments. This will make intellisense work, however, there is no detailed usage info like PHPDocs. This is because of PHP-CPP limitations.

If you want more detailed info, see `plugin/aspose/aspose.php`, which is an annotated stub file, but it has to be updated manually for now.
See below for install instructions.

If you wanna build stub files, install the stub generator:

```
composer update
```

Run the following to build a single file containing all stub code:

```
./make.sh -s 1
```

Run this to generate a stub file for each class:

```
./make.sh -s 2
```

Additionally, you may also generate stubs as PHPStorm plugin. 

This is the recommended way, since it's the easiest to install and the stub data contains detailed PHPDocs.
Simply add the resulting `plugin/phpstorm-aspose-php-plugin.jar` to PHPStorm (see [this page](https://www.jetbrains.com/help/phpstorm/managing-plugins.html) if you wanna know more).

Run this command to build the plugin:

```
./make.sh -p 1
```

Please note that each IDE requires unique config steps to use the stubs. Please refer to your IDE's docs for details.


##  9. <a name='development'></a>Development

We welcome contributors! Please see [./CONTRIBUTE.MD](contribute.md) to get started.







