#include "../include/aspose.h"
#include "../include/presentation.h"
#include "../include/slide.h"
#include "../include/islide_collection.h"
#include "../include/slide_size.h"
#include <phpcpp.h>
#include <iostream>
#include "../include/master-slide-collection.h"
#include "../include/image-collection.h"


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
     * @param params Php::Parameters params
     * @param params[0] string path Path to licence file
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
     * @param params Php::Parameters params
     * @param params[0] string path Path to presentation file
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
     * @brief Writes the presentaton to disk or returns it as byte array.
     * 
     * @param params Php::Parameters params
     * @param params[0] string path Output path. File must not exist.
     * @param params[1] string format file format.
     * @param params[2] bool AsArray if true, byte array will be returned otherwise it'll save to disk.
     * 
     * @throw System::IO::IOException cannot access path
     * @throw System::UnauthorizedAccessException Has no right access file
     */
    Php::Value Presentation::save(Php::Parameters &params) {
        String outfile = String(params[0].stringValue());
        std::string fmt = params[1].stringValue();
        bool asArray = params[2].boolValue();
       
        SaveFormat format = SaveFormat::Ppt;
        ArrayPtr<string> formats = new Array<string>(vector<string> {"ppt", "pptx"});

        if(formats->IndexOf(fmt) != -1) {
            if(fmt == "ppt") {
                format = SaveFormat::Ppt;
            } else if(fmt == "pptx") {
                format = SaveFormat::Pptx;
            } 

            try {
                if(asArray) {
                     SharedPtr<MemoryStream> stream = MakeObject<MemoryStream>();
                     _pres->Save(stream, format);
                      vector<uint8_t> res = stream->ToArray()->data();
                     return Php::Array(res);
                } else {
                     SharedPtr<Stream> stream = MakeObject<FileStream>(outfile, FileMode::Create);
                    _pres->Save(stream, format);
                }

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
        } else {
              throw Php::Exception("Uknown format.");
        }

        return nullptr;

    }


    /**
     * @brief Clones the slide with given index.
     * 
     * @param params Php::Parameters
     * @param params[0] int index The index of the slide to clone
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
     * @param params Php::Parameters
     * @param params[0] string path A path to the presentation file
     * @param params[1] string type A type indicating which type of text should be returned. Type can be either of the following: 
     * - master 
     * - layout
     * - notes
     * - all
     * 
     * 
     * @throw System::ArgumentException path is invalid
     * @throw System::IO::FileNotFoundException File does not exist
     * @throw System::UnauthorizedAccessException Has no right access file
     * @return Php::Value 
     */
     Php::Value Presentation::getPresentationText(Php::Parameters &params) {
        std::string path = params[0].stringValue();
        std::string type = params[1].stringValue();

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
     * @brief Returns a Slide collection.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.presentation#a9981b38f5a01d9fa5482f05b0a75974c
     * @return Php::Value 
     */
    Php::Value Presentation::get_Slides() {
        ISlideCollection* coll = new ISlideCollection(_slides);
        return Php::Object("AsposePhp\\Slides\\ISlideCollection", coll);
    }

    /**
     * @brief Alias to get_Slides().
     * @deprecated Don't use.
     * 
     * @return Php::Value 
     */
    Php::Value Presentation::getSlides() {
       return this->get_Slides();
    }


    /**
     * @brief Returns slide size object
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.presentation#a857de5523405acaee7fb0a4da97f3f47
     * @return Php::Value 
     */
    Php::Value Presentation::get_SlideSize() {
        SlideSize * size = new SlideSize(_pres->get_SlideSize());
        return Php::Object("AsposePhp\\Slides\\SlideSize", size);
    }

    /**
     * @brief Returns a specific slide by index.
     * 
     * @param params Php::Parameters.
     * @param params[0] int index The 0 based index of the slide to get.
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


    /**
     * @brief Returns a list of all master slides that are defined in the presentation. Read-only IMasterSlideCollection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.presentation#a8fda502eacdf2fe4ccfc1ab0bf185d29
     * @return Php::Value 
     */
    Php::Value Presentation::get_Masters() {
        SharedPtr<IMasterSlideCollection> items = _pres->get_Masters();
        MasterSlideCollection * phpValue = new MasterSlideCollection(items); 
        return Php::Object("AsposePhp\\Slides\\MasterSlideCollection", phpValue);
    }

    /**
     * @brief Returns the collection of all images in the presentation. Read-only IImageCollection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.presentation#a585e72bb387d3a887e6e9904e4da83fc
     * @return Php::Value 
     */
    Php::Value Presentation::get_Images() {
        SharedPtr<IImageCollection> items = _pres->get_Images();
        ImageCollection * phpValue = new ImageCollection(items); 
         return Php::Object("AsposePhp\\Slides\\ImageCollection", phpValue);
    }


}
