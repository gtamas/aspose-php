#include "../include/aspose.h"
#include "../include/presentation_factory.h"
#include "../include/presentation_text.h"
#include "../include/util.h"


using namespace Aspose::Slides;
using namespace System;
using namespace std;

namespace AsposePhp {


    /**
     * @brief PHP Constructor
     * 
     * @param params
     */
    void PresentationFactory::__construct(Php::Parameters &params)
    {

    }

    /**
     * @brief Returns all text from the presentation (charts, tables not included!).
     * 
     * @param params Path to the peresentation file to read.
     * 
     * @throw System::ArgumentException path is invalid
     * @throw System::IO::FileNotFoundException File or path doesn't exist
     * @return Php::Value 
     */
    Php::Value PresentationFactory::GetPresentationText(Php::Parameters &params)
    {
        try {
            String path = String(params[0].stringValue());
            SharedPtr<IPresentationText> text = _factory->GetPresentationText(path, TextExtractionArrangingMode::Unarranged);
            PresentationText * phpText = new PresentationText(text); 
            return Php::Object("AsposePhp\\Slides\\PresentationText", phpText);
        }
        catch(System::ArgumentException &e) {
            throw Php::Exception(e.what());
        }
        catch(System::IO::FileNotFoundException &e) {
              throw Php::Exception(e.what());
        }
    }


}
