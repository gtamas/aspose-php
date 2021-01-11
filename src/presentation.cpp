#include "../include/aspose.h"
#include "../include/presentation.h"
#include "../include/slide.h"
#include "../include/islide_collection.h"
#include <phpcpp.h>
#include <iostream>
#include <Util/License.h>
#include <Exceptions/PptxEditException.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Export;
using namespace System;
using namespace System::Collections::Generic;
using namespace std;
using namespace System::IO;

namespace AsposePhp {

    /**
     * @brief PHP Constructor
     * 
     * @param params Path to presentation file to read. This is optional. If not defined, an empty presentation will be created.
     */
    void Presentation::__construct(Php::Parameters &params)
    {
    
        this->load(params);
        
        if(params.size() > 1) {
            this->loadLicense(params);
        }

    }

    /**
     * @brief Loads license file
     * 
     * @param params Has one param, the path
     * 
     * @throw System::ArgumentException path is invalid
     * @throw System::IO::FileNotFoundException File does not exist
     * @throw System::UnauthorizedAccessException Has no right access file
     * @throw System::Xml::XmlException File contains invalid XML
     * 
     */
    void Presentation::loadLicense(Php::Parameters &params) {
          std::string licensePath = params[1].stringValue();
          
          try {
            SharedPtr<Aspose::Slides::License> lic = MakeObject<Aspose::Slides::License>();
            lic->SetLicense(String(licensePath));

            if(!lic->IsLicensed()) {
                throw Php::Exception("Invalid license");
            }
          }
          catch(System::ArgumentException &e) {
              throw Php::Exception(e.what());
          }
          catch(System::IO::FileNotFoundException &e) {
              throw Php::Exception(e.what());
          }
          catch(System::UnauthorizedAccessException &e) {
              throw Php::Exception(e.what());
          }
          catch(System::Xml::XmlException &e) {
              throw Php::Exception(e.what());
          }
          catch(System::InvalidOperationException &e) {
              throw Php::Exception(e.what());
          }
          catch(...) {
              throw Php::Exception("Unknown error. Unable to loead license file..");
          }
         
    }

    /**
     * @brief Loads a presentation file.
     * 
     * @param params Path to presentation to read.
     * 
     * @throw System::ArgumentException path is invalid
     * @throw System::IO::FileNotFoundException File does not exist
     * @throw System::UnauthorizedAccessException Has no right access file
     * @return Php::Value 
     */
    Php::Value Presentation::load(Php::Parameters &params) {
        std::string path = params[0].stringValue();
        // std::string licencePath = params[1].stringValue();
        const String templatePath = String(path);

        SharedPtr<LoadOptions> loadOptions = MakeObject<LoadOptions>();

        try {
            _pres = MakeObject<Aspose::Slides::Presentation>(templatePath);
            _slides = _pres->get_Slides();

            SharedPtr<PresentationFactory> pFactory = PresentationFactory::get_Instance();
            _slideText =  pFactory->GetPresentationText(templatePath, TextExtractionArrangingMode::Unarranged)->get_SlidesText();
        }
        catch(System::ArgumentException &e) {
            throw Php::Exception(e.what());
        }
        catch(System::IO::FileNotFoundException &e) {
              throw Php::Exception(e.what());
        }
        catch(System::UnauthorizedAccessException &e) {
              throw Php::Exception(e.what());
        }
        catch(...) {
            throw Php::Exception("Uknown error. Unable to loead input file..");
        }

        return this;
    }

    /**
     * @brief Writes the presentaton to disk.
     * 
     * @param params Output path. File must not exist.
     * 
     * @throw System::IO::IOException cannot access path
     * @throw System::UnauthorizedAccessException Has no right access file
     */
    void Presentation::save(Php::Parameters &params) {
        String outfile = String(params[0].stringValue());
        string ext = outfile.Substring(outfile.LastIndexOf(u".")+1).ToUtf8String();

        SaveFormat format = SaveFormat::Ppt;
        ArrayPtr<string> formats = new Array<string>(vector<string> {"ppt", "pptx"});

        if(formats->IndexOf(ext) != -1) {
            if(ext == "ppt") {
                format = SaveFormat::Ppt;
            } else if(ext == "pptx") {
                format = SaveFormat::Pptx;
            } 

            try {
                SharedPtr<Stream> stream = MakeObject<FileStream>(outfile, FileMode::CreateNew);
                _pres->Save(outfile, format);
            }
            catch(System::IO::IOException &e) {
              throw Php::Exception(e.what());
            }
            catch(System::UnauthorizedAccessException &e) {
              throw Php::Exception(e.what());
            }
            catch(...) {
                throw Php::Exception("Uknown error. Unable to write output file..");
            }
        }

    }


    /**
     * @brief Clones the slide with given index.
     * 
     * @param params 0 based index of the slide to be cloned
     * 
     * @throw System::ArgumentOutOfRangeException slide index does not exist
     * @throw Aspose::Slides::PptxEditException PPT modification failed.
     */
    void Presentation::cloneSlide(Php::Parameters &params) {
        int slideNo = params[0].numericValue();
        
        try {
            _slides->AddClone(_slides->idx_get(slideNo));
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(slideNo));
        }
        catch(Aspose::Slides::PptxEditException &e) {
            throw Php::Exception(e.what());
        }
        catch(...) {
            throw Php::Exception("Uknown error. Unable to clone slide..");
        }	

    }


    /**
     * @brief Returns all text from presentation as string. Does NOT include charts and tables.
     * 
     * @param params An array with 2 string elements: a path to the presentation file and a 
     * type indicating which type of text should be returned. Type can be either of the following: 
     * - master 
     * - layout
     * - notes
     * - all
     * 
     * @throw System::ArgumentException path is invalid
     * @throw System::IO::FileNotFoundException File does not exist
     * @throw System::UnauthorizedAccessException Has no right access file
     * @return Php::Value 
     */
     Php::Value Presentation::getPresentationText(Php::Parameters &params) {
        std::string path = params[0].stringValue();
        std::string type = params[1].stringValue();
        bool arranged = false;

        String templatePath = String(path);

        try {
            SharedPtr<PresentationFactory> pFactory = PresentationFactory::get_Instance();
            ArrayPtr<SharedPtr<ISlideText>> text =  pFactory->GetPresentationText(templatePath, TextExtractionArrangingMode::Unarranged)->get_SlidesText();

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
        catch(System::ArgumentException &e) {
            throw Php::Exception(e.what());
        }
        catch(System::IO::FileNotFoundException &e) {
              throw Php::Exception(e.what());
        }
        catch(System::UnauthorizedAccessException &e) {
              throw Php::Exception(e.what());
        }
    }


    /**
     * @brief Returns the number of slides in presentation.
     * 
     * @return Php::Value 
     */
    Php::Value Presentation::getNumberOfSlides() {

        return _pres->get_Slides()->get_Count();
    }

    /**
     * @brief Returns an array of slides as Slide objects.
     * 
     * @return Php::Value 
     */
    Php::Value Presentation::getSlides() {
        ISlideCollection* coll = new ISlideCollection(_slides);
        return Php::Object("AsposePhp\\Slides\\ISlideCollection", coll);
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
                slideArr.push_back(Php::Object("AsposePhp\\Slides\\Slide", phpSlide));
            }
            return Php::Array(slideArr);
        }
        catch(ArgumentOutOfRangeException &e) {
            return nullptr;
        }
    }

    /**
     * @brief Returns a specific slide by index.
     * 
     * @param params The 0 based index of the slide.
     * 
     * @throw System::ArgumentOutOfRangeException index does not exist.
     * @return Php::Value 
     */
    Php::Value Presentation::getSlide(Php::Parameters &params) {
        int slideNo = params[0].numericValue();

        try {
            SharedPtr<ISlide> slide = _pres->get_Slides()->idx_get(slideNo);
            Slide* ret = new Slide(slide,  
                _slideText[slideNo]->get_LayoutText().ToUtf8String(), 
                _slideText[slideNo]->get_NotesText().ToUtf8String(), 
                _slideText[slideNo]->get_MasterText().ToUtf8String(), 
                 slide->get_SlideNumber());
            return Php::Object("AsposePhp\\Slides\\Slide", ret);
        }
        catch(System::ArgumentOutOfRangeException &e) {
            throw Php::Exception("Invalid index: " + to_string(slideNo));
        }
    }


}
