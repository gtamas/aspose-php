<!-- vscode-markdown-toc -->
* 1. [Prerequisites](#prerequisites)
* 2. [Precompiled version](#precompiled-version)
* 3. [Compile from source](#compile-from-source)
* 4. [API](#api)
* 5. [PHP](#php)
* 6. [Known Aspose bugs](#known-aspose-bugs)
* 7. [PHP stubs](#php-stubs)
* 8. [Development](#development)
    * 8.1. [About the code](#about-the-code)
    * 8.2. [More on the PHP classes and methods](#more-on-the-php-classes-and-methods)
    * 8.3. [On memory management](#on-memory-management)
    * 8.4. [Adding new Aspose functionality](#adding-new-aspose-functionality)
    * 8.5. [The code generator](#the-code-generator)

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
sudo make install
```
##  3. <a name='compile-from-source'></a>Compile from source

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

Or this to build only changed files, partial rebuild:

```
./make.sh
```

##  4. <a name='api'></a>API

Please see [./docs/index.html]("./docs/index.html").

##  5. <a name='php'></a>PHP

See test.php for examples.

```
php ./test.php
```

##  6. <a name='known-aspose-bugs'></a>Known Aspose bugs

In order to make preview image generation work (Slide::GetThumbnail()), you must edit /etc/fonts/fonts.conf 

```
sudo vim /etc/fonts/fonts.conf
```

and comment the following line:

```
<dir>~/.fonts</dir>
```

##  7. <a name='php-stubs'></a>PHP stubs

You can find stub files in ./stubs. These can be used to make intellisense work in IDEs like PHPStorm.
Please note that the generated stubs contain only the namespaces, methods and classes and some info about the arguments. This will make intellisense work, however, there is no detailed usage info like PHPDocs. This is because of PHP-CPP limitations.

If you want more detailed info, see `plugin/aspose/aspose.php`, which is an annotated stub file, but it has to be updated manually.
See below for install instructions.

If you wanna build these files, install the stub generator:

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

Additionally, you may also generate stubs as PHPStorm plugin. This is the recommended way, since it's the easiest to install and the stub data contains detailed PHPDocs.
Simply add the resulting `plugin/phpstorm-aspose-php-plugin.jar` to PHPStorm (see [this page](https://www.jetbrains.com/help/phpstorm/managing-plugins.html) if you wanna know more).

```
./make.sh -p 1
```

Please note that each IDE requires unique config steps to use the stubs. Please refer to your IDE's docs for details.


##  8. <a name='development'></a>Development

###  8.1. <a name='about-the-code'></a>About the code

This is C++ 20 code. 

Since it is not possible to export the Aspose classes directly to PHP, we use the following logic to build a proxy:

- Under the AsposePhp namespace, there is a PHP class (extending *Php::Base*) for each Aspose class. Their names are identical.
- This has a protected member called **_asposeObj**, which is smart pointer and it points to the corresponding Aspose class instance. For example in our *Slide* class _asposeObj points to an instance of *Aspose::Slides::Slide*.
- You can define public methods on the PHP class which have access to to Aspose functionality via *this->_asposeObj*. This is where you implement any logic based on Aspose code or even totally custom logic.
- PHP will be able to instantiate these classes and call their methods, like normal PHP class methods.


###  8.2. <a name='more-on-the-php-classes-and-methods'></a>More on the PHP classes and methods

***Classes***

- PHP classes should be created using the *AsposePhp::AsposeObjectWrapper* template class. See the docs, the *./include/aspose_php.h* header and any of the other headers for details.
- If the new PHP class is a collection, it should also extend *Collection* template class. See *./include/column-collection.h* for an example. 
- Each PHP class should be exported under the AsposePhp namespace using the namespace of its Aspose counterpart as a nested namespace, e.g: Aspose::Slides::Slide -> AsposePhp::Slides::Slide.
- Each PHP Class must be registered in *./src/main.cpp* in order to be exported to PHP.
- Instances of PHP classes can be easily returned by the the *AsposePhp::AsposeObjectWrapper::wrapObject* helper template method. This is most useful when you wish to return non-primitive results produced by an Aspose method.  See aspose_php.h for details. 

***Methods***

- The Php methods might return primitives as well as instances other PHP classes (or the same class) or nullptr or they can also use void. If they return a value, it must be compatible with **Php::Value**.
- Methods must be also registered in ./src/main.cpp, otherwise PHP won't see them.

###  8.3. <a name='on-memory-management'></a>On memory management

You shouldn't worry about this, the PHP-CPP and Aspose libs got you covered for the most part. Just keep in mind:

- The Aspose lib uses smart pointers, most Aspose methods return these.
- If you wanna manually instantiate an Aspose class, use *MakeObject* and *MakeArray* Aspose functions (unless the docs suggest otherwise).
- If the value you return was created with *new* operator, PHP-CPP will take care about freeing the memory.
- For things you don't need to return to PHP, use smart pointers, avoid new.


###  8.4. <a name='adding-new-aspose-functionality'></a>Adding new Aspose functionality

 Exporting some Aspose class to PHP usually requires the steps outlined below. Please note that it's best to use the code generator, you shouldn't do this by hand.


1. Create the header file in *./include/some-class.h*

```
#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef SOMECLASS_H
#define SOMECLASS_H

using namespace Aspose::Some::ns;

namespace AsposePhp {

    class SomeClass : public AsposeObjectWrapper<SomeAsposeClass>, public Php::Base
    {
        public:
            SomeClass(System::SharedPtr<SomeAsposeClass> obj) : AsposeObjectWrapper<SomeAsposeClass>(obj) {};
            void __construct(Php::Parameters &params);
            

    };

}

#endif


```

2. Create the class body in ./src/some-class.cpp*

```
#include "../include/aspose.h"
#include "../include/some-class.h"
#include <phpcpp.h>

using namespace Aspose::Something;
// add more aspose namespaces as needed;

namespace AsposePhp {
 

}

```

3. Register the new class in ./src/main.cpp*


```
#include "./include/some-class.h"

...

// SomeClass

Php::Class<AsposePhp::SomeClass> someObj("AsposePhp\\Some\\Class");

...

extension.add(std::move(someObj));
       
```

4. Compile

That's it! At this point, you have a new class in PHP, which you can refer to as AsposePhp\Some\Class. You can instantiate it using the new operator.

This class has access to SomeAsposeClass functionality, but currently it has no methods, so it's not very useful.
In order to add a method, do this:


1. Edit the header file (*./include/some-class.h*)

Add this line under the *public* section:

```
Php::Value someMethod();
```

2. Edit he class body (*./src/some-class.cpp*)

Add the new method like this:

```
namespace AsposePhp {
 
 Php::Value someMethod() {
	 // call aspose functions using _asposeObj->someMehod() or write custom logic. 
	 // You can call any method of SomeAsposeClass like this.

	 return _asposeObj->someAsposeMethod();
 }

}
```

3. Register your method

Open up *./src/main.cpp* and add this below your class registration code:

```
 someObj.method<&AsposePhp::SomeClass::someMethod>("someMethod", Php::Public, {});

```

4. Compile

Now you can can use your new class like this:

```
<?php 
use AsposePhp\AsposeUtil;

$cls = new AsposePhp\Some\Class();
echo $cls->someMethod() // prints whatever someAsposeMethod has returned. ?>
```

This is just a very simple example. Methods may not return a value at all, they may return complex values (like other PHP class instances, arrays, custom objects etc) and they might have arguments too. You can find plenty of examples for these in the code.

Additionally, please check out the following resources:

- [PHP-CPP docs](http://www.php-cpp.com/documentation/)
- [Aspose Slides CPP API docs](https://apireference.aspose.com/slides/cpp)

###  8.5. <a name='the-code-generator'></a>The code generator

We also have a code generator which can help a lot with bootstrapping new classes, collections and methods.

The generator uses a series of prompts to collect user input and it will generate all necessary source files and registration code for you.

This is a [Yeoman](https://yeoman.io/) generator and it's written in Node.

- Install [node LTS](https://nodejs.org/en/)
- Install Yeoman

```
npm install -g yo
```

Once you've done this, you can start bootstrapping stuff.

**Boostrap a class**

```
yo aspose::class
```

This can be used to bootstrap a new class that you wish to export to PHP. 

Generator prompts:

- Name of the Aspose class you wanna export. Use only the class name, for instance, instead of Aspose::Slides::Slide you should type "Slide".
- Namespace of the aformentioned class (Aspose::Slides).
- You can also add methods. If you do, empty placeholder methods will be generated which return null.

Once the prompts are filled, this generates the cpp and h files, prints the registration code and copies it to the clipboard. All you need to do is to update *./src/main.cpp* with this code, then recompile.


**Boostrap a collection**

```
yo aspose::collection
```

This can be used to create classes for Aspose collections such as [this one](https://apireference.aspose.com/slides/cpp/class/aspose.slides.audio_collection).
It will generate some boilerplate code too.

Generator prompts:

- Name of the Aspose (see above)
- Namespace of the Aspose class (ditto)
- Name of the Apsose class the collection holds. 

This is the type of an item in the collection. The name of another Aspose class.

- Namespace of the Apsose class the collection holds. 

This is the namespace the previously mentioned class belongs to.

- Again, you may addd placeholder method if you wish.

Once finished, this will generate the sources and print reg code for you, just like the others. Add it to *./src/main.cpp*, then recompile.


***Boostrap a method**

```
yo aspose::method
```

This one is special, because it does not generate source files, but only the code for the new method. It is able to generate different kind of methods.

Generator prompts:

- The type of the method you wanna generate
	- Empty method 
	
	A method whose type is void
	
	- A method that calls its super counterpart. 
	
	This creates code which calls the method of the same name on the super class (which is an Aspose class).

	- A method that calls a method of the same name on the Aspose object

	This one calls the method of the same name on _asposeObj and returns the result which should be primitive or nullptr.

	- A method that returns an Aspose object 

	Similar to the previous one but this returns a non-primitive value, typically an exported class instance. It can produce this value either with or without a wrapper.
	If the class this method belongs to was created using *AsposePhp::AsposeObjectWrapper*, say yes, otherwise say no. Also see ./include/aspose_php.h -> wrapObject.

	- A method that returns an array of Aspose objects 

	This one returns and Array of objects, each representing an Aspose class.

Additional generator prompts depending on type:

- Empty method
	- The name of the exported method
	- The name of exported class this method belongs to

- A method that calls its super counterpart.
	- The name of the exported method
	- The name of exported class this method belongs to 
	- The name of the parent class

- A method that calls a method of the same name on the Aspose object
	- The name of the exported method
	- Does this method return a value? (void or not)
	- The name of exported class this method belongs to

- A method that returns an Aspose object 
 	- The name of the exported method
	- The name of exported class this method belongs to
	- Should object wrapper be used (say yes if AsposeObjectWrapper is the base class of this class) 
	- The name of method to be called on the Apose class producing results (see in Aspose docs)
	- Name of the resulting Aspose class (should be an Aspose class you exported using yo aspose:class)

Once all is done, all generated code will be copied to the clipboard. Now you need to add this to your header, cpp file and main.cpp.

If you wish to extend the Yeoman generator see [this page](https://yeoman.io/authoring/index.html).






