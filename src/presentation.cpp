#include "../include/aspose.h"
#include "../include/presentation.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Export;
using namespace System;
using namespace std;
using namespace System::IO;

namespace AsposePhp {

    class SlideText
    {
    public:
        string text;
        string masterText;
        string layoutText;
        string notesText;

    };

    void Presentation::__construct(Php::Parameters &params)
    {

        if(params.empty() || this->open(params) == -1) {
            std::cerr << "No file.."; 
        }

    }

    Php::Value Presentation::open(Php::Parameters &params) {
        std::string path = params[0].stringValue();
        const String templatePath = String(path);

        if(!File::Exists(templatePath)) {
            return -1;
        }

        SharedPtr<LoadOptions> loadOptions = MakeObject<LoadOptions>();
        _pres = MakeObject<Aspose::Slides::Presentation>(templatePath);
        _slides = _pres->get_Slides();

        return this;
    }

    void Presentation::save(Php::Parameters &params) {
        String outfile = String(params[0].stringValue());
        string ext = outfile.Substring(outfile.LastIndexOf(u".")+1).ToUtf8String();

        SaveFormat format;
        ArrayPtr<string> formats = new Array<string>(vector<string> {"ppt", "pptx"});

        if(formats->IndexOf(ext) != -1) {
            if(ext == "ppt") {
                format = SaveFormat::Ppt;
            } else if(ext == "pptx") {
                format = SaveFormat::Pptx;
            } 

            SharedPtr<Stream> stream = MakeObject<FileStream>(outfile, FileMode::Create);
            _pres->Save(stream, format);
        }

    }


    void Presentation::cloneSlide(Php::Parameters &params) {
        int slideNo = params[0].numericValue();
        
        _slides->AddClone(_slides->idx_get(slideNo));

    }


     Php::Value Presentation::getText(Php::Parameters &params) {
        std::string path = params[0].stringValue();
        std::string type = params[1].stringValue();
        bool arranged = params[2].boolValue();

        String templatePath = String(path);

        if(!File::Exists(templatePath)) {
            return -1;
        }

        SharedPtr<PresentationFactory> pFactory = PresentationFactory::get_Instance();
        ArrayPtr<SharedPtr<ISlideText>> text =  pFactory->GetPresentationText(templatePath, arranged ? 
        TextExtractionArrangingMode::Arranged : TextExtractionArrangingMode::Unarranged)->get_SlidesText();

        Php::Value texts;
        
        for (int i = 0; i < text->get_Length(); i++) {
            if(type == "all") {
                texts[i] = text[i]->get_Text().ToUtf8String();
            } else if(type == "master") {
                texts[i] = text[i]->get_MasterText().ToUtf8String();
            }  else if(type == "layout") {
                texts[i] = text[i]->get_LayoutText().ToUtf8String();
            } else if(type == "notes") {
                texts[i] = text[i]->get_NotesText().ToUtf8String();
            }
        }

        return texts;
    }


    Php::Value Presentation::slideCount() {

        return _pres->get_Slides()->get_Count();
    }


}
