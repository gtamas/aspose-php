#include "../include/aspose.h"
#include "../include/presentation.h"
#include "../include/slide.h"
#include "../include/islide_collection.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Export;
using namespace System;
using namespace System::Collections::Generic;
using namespace std;
using namespace System::IO;

namespace AsposePhp {

    void Presentation::__construct(Php::Parameters &params)
    {
    
        if(!params.empty() && this->load(params) == -1) {
            std::cerr << "No file.."; 
        }

    }

    Php::Value Presentation::load(Php::Parameters &params) {
        std::string path = params[0].stringValue();
        const String templatePath = String(path);

        if(!File::Exists(templatePath)) {
            return -1;
        }

        SharedPtr<LoadOptions> loadOptions = MakeObject<LoadOptions>();
        _pres = MakeObject<Aspose::Slides::Presentation>(templatePath);
        _slides = _pres->get_Slides();

        SharedPtr<PresentationFactory> pFactory = PresentationFactory::get_Instance();
        _slideText =  pFactory->GetPresentationText(templatePath, TextExtractionArrangingMode::Arranged)->get_SlidesText();

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


     Php::Value Presentation::getPresentationText(Php::Parameters &params) {
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

       string texts = "";
        
        for (int i = 0; i < text->get_Length(); i++) {
            if(type == "all") {
                texts += text[i]->get_Text().ToUtf8String();
            } else if(type == "master") {
                texts += text[i]->get_MasterText().ToUtf8String();
            }  else if(type == "layout") {
                texts += text[i]->get_LayoutText().ToUtf8String();
            } else if(type == "notes") {
                texts += text[i]->get_NotesText().ToUtf8String();
            }
        }

        return texts;
    }


    Php::Value Presentation::getNumberOfSlides() {

        return _pres->get_Slides()->get_Count();
    }

    Php::Value Presentation::getSlides() {
        ISlideCollection* coll = new ISlideCollection(_slides);
        return Php::Object("ISlideCollection", coll);
    }

    Php::Value Presentation::getSlides2() {

        if(_slides == nullptr) {
            _slides = _pres->get_Slides();
        }

        int32_t slideCount = _slides->get_Count();
        int32_t slideTextCount = _slideText->get_Count();
        vector<Php::Object> slideArr;
        SmartPtr<ISlide> slide;
        
        try {
            for(int i = 0; i < slideCount; i++) {
                slide = _slides->idx_get(i);
                AsposePhp::Slide* phpSlide;
                if(i >= slideTextCount) {
                    phpSlide = new AsposePhp::Slide(slide, "", "", "", slide->get_SlideNumber());
                } else {
                    phpSlide = new AsposePhp::Slide(slide, 
                    _slideText[i]->get_LayoutText().ToUtf8String(), 
                    _slideText[i]->get_NotesText().ToUtf8String(), 
                    _slideText[i]->get_MasterText().ToUtf8String(), slide->get_SlideNumber());
                    }
                slideArr.push_back(Php::Object("Slide", phpSlide));
            }
            return Php::Array(slideArr);
        }
        catch(ArgumentOutOfRangeException e) {
            return nullptr;
        }
    }

    Php::Value Presentation::getSlide(Php::Parameters &params) {
        int slideNo = params[0].numericValue();

        try {
            SharedPtr<ISlide> slide = _pres->get_Slides()->idx_get(slideNo);
            Slide* ret = new Slide(slide,  
                _slideText[slideNo]->get_LayoutText().ToUtf8String(), 
                _slideText[slideNo]->get_NotesText().ToUtf8String(), 
                _slideText[slideNo]->get_MasterText().ToUtf8String(), 
                 slide->get_SlideNumber());
            return Php::Object("Slide", ret);
        }
        catch(ArgumentOutOfRangeException e) {
            return nullptr;
        }
    }


}
