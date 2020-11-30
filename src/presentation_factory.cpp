#include "../include/aspose.h"
#include "../include/presentation_factory.h"
#include "../include/presentation_text.h"
#include "../include/util.h"


using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    void PresentationFactory::__construct(Php::Parameters &params)
    {

    }

    Php::Value PresentationFactory::GetPresentationText(Php::Parameters &params)
    {
        String path = String(params[0].stringValue());
        SharedPtr<IPresentationText> text = _factory->GetPresentationText(path, TextExtractionArrangingMode::Arranged);
        PresentationText * phpText = new PresentationText(text); 
        return Php::Object("PresentationText", phpText);
    }


}
