#include <phpcpp.h>
#include "../include/aspose_util.h"
#include "../include/presentation.h"

using namespace AsposePhp;

/**
 *  tell the compiler that the get_module is a pure C function
 */
extern "C" {
    
    /**
     *  Function that is called by PHP right after the PHP process
     *  has started, and that returns an address of an internal PHP
     *  strucure with all the details and features of your extension
     *
     *  @return void*   a pointer to an address that is understood by PHP
     */
    PHPCPP_EXPORT void *get_module() 
    {
        static Php::Extension extension("aspose_php", "1.0");

        Php::Namespace ns("AsposePhp");

        // Presentation class

        Php::Class<AsposePhp::Presentation> pres("Presentation", 0);

        pres.method<&AsposePhp::Presentation::open>("open", { 
            Php::ByVal("path", Php::Type::String, true) 
        });

        pres.method<&AsposePhp::Presentation::__construct>("__construct", Php::Public, { 
            Php::ByVal("path", Php::Type::String, true) 
        });

        pres.method<&AsposePhp::Presentation::getText>("getText", Php::Public, { 
            Php::ByVal("path", Php::Type::String, true),
            Php::ByVal("type", Php::Type::String, true),
            Php::ByVal("arranged", Php::Type::Bool, false)   
        });

        pres.method<&AsposePhp::Presentation::slideCount>("slideCount", Php::Public, {});

        pres.method<&AsposePhp::Presentation::save>("save", Php::Public, { 
            Php::ByVal("outfile", Php::Type::String, true) 
        });

         pres.method<&AsposePhp::Presentation::cloneSlide>("cloneSlide", Php::Public, { 
            Php::ByVal("outfile", Php::Type::Numeric, true) 
        });

        // AsposeUtil

        Php::Class<AsposeUtil> util("AsposeUtil");

        util.method<&AsposeUtil::getVersion>("getVersion", {});

        ns.add<AsposeUtil>("AsposePoseUtil");
        ns.add<AsposePhp::Presentation>("Presentation");
        
        extension.add(std::move(util));
        extension.add(std::move(pres));
        extension.add(std::move(ns));

        return extension;
    }
}
