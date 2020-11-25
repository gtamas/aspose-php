#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef PRESENTATION_H
#define PRESENTATION_H

namespace AsposePhp {

    class Presentation : public Php::Base
    {
    private:
       System::SharedPtr<Aspose::Slides::Presentation> _pres;
       System::SharedPtr<Aspose::Slides::ISlideCollection> _slides = nullptr;
       System::ArrayPtr<System::SharedPtr<Aspose::Slides::ISlideText>> _slideText = nullptr;

    public:
        Presentation() = default;
        virtual ~Presentation() = default;
    
        void __construct(Php::Parameters &params);
        void save(Php::Parameters &params);
        void cloneSlide(Php::Parameters &params);
        Php::Value load(Php::Parameters &params);
        Php::Value getPresentationText(Php::Parameters &params);
        Php::Value getNumberOfSlides();
        Php::Value getSlides();
        Php::Value getSlide(Php::Parameters &params);
    };
}

#endif