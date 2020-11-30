#include <phpcpp.h>
#include "../include/aspose.h"

#ifndef PRESENTATION_FACTORY_H
#define PRESENTATION_FACTORY_H


namespace AsposePhp {

    class PresentationFactory : public Php::Base 
    {
        private: 
            System::SharedPtr<Aspose::Slides::PresentationFactory> _factory;
        public:
            PresentationFactory() {
                _factory = Aspose::Slides::PresentationFactory::get_Instance();
            };
            virtual ~PresentationFactory() {
                _factory.reset();
            };
            
            void __construct(Php::Parameters &params);
            Php::Value GetPresentationText(Php::Parameters &params);

    };

}

#endif
