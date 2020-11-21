#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef PRESENTATION_H
#define PRESENTATION_H

namespace AsposePhp {

    class Presentation : public Php::Base
    {
    private:
       System::SharedPtr<Aspose::Slides::Presentation> _pres;
       System::SharedPtr<Aspose::Slides::ISlideCollection> _slides;

    public:
        Presentation() = default;
        virtual ~Presentation() = default;
    
        void __construct(Php::Parameters &params);
        void save(Php::Parameters &params);
        void cloneSlide(Php::Parameters &params);
        
        Php::Value open(Php::Parameters &params);
        Php::Value getText(Php::Parameters &params);
        Php::Value slideCount();
    };
}

#endif