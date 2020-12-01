/**
 * @file main.cpp
 * @author Tamas Geschitz (you@domain.com)
 * @brief Main entry, PHP extension registration functions.
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright DashboardVision (c) 2020
 * 
 */

#include <phpcpp.h>
#include "../include/aspose_util.h"
#include "../include/presentation.h"
#include "../include/islide_collection.h"
#include "../include/presentation_factory.h"
#include "../include/presentation_text.h"
#include "../include/slide_text.h"
#include "../include/notes_slide_manager.h"
#include "../include/notes_slide.h"
#include "../include/text_frame.h"
#include "../include/slide.h"

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

        pres.method<&AsposePhp::Presentation::load>("load", { 
            Php::ByVal("path", Php::Type::String, true) 
        });
        pres.method<&AsposePhp::Presentation::__construct>("__construct", Php::Public, { 
            Php::ByVal("path", Php::Type::String, false) 
        });
        pres.method<&AsposePhp::Presentation::getPresentationText>("getPresentationText", Php::Public, { 
            Php::ByVal("path", Php::Type::String, true),
            Php::ByVal("type", Php::Type::String, true),
            Php::ByVal("arranged", Php::Type::Bool, false)   
        });
        pres.method<&AsposePhp::Presentation::getNumberOfSlides>("getNumberOfSlides", Php::Public, {});
        pres.method<&AsposePhp::Presentation::getSlides>("getSlides", Php::Public, {});
        pres.method<&AsposePhp::Presentation::getSlide>("getSlide", Php::Public, { 
            Php::ByVal("slideNo", Php::Type::Numeric, true) 
        });
        pres.method<&AsposePhp::Presentation::save>("save", Php::Public, { 
            Php::ByVal("outfile", Php::Type::String, true) 
        });
        pres.method<&AsposePhp::Presentation::cloneSlide>("cloneSlide", Php::Public, { 
            Php::ByVal("outfile", Php::Type::Numeric, true) 
        });

        // SlideCollection

        Php::Class<ISlideCollection> col("ISlideCollection");

        col.method<&AsposePhp::ISlideCollection::size>("size", {});
        col.method<&AsposePhp::ISlideCollection::get_Item>("get_Item", {});


        // PresentationFactory

        Php::Class<AsposePhp::PresentationFactory> presentationFactory("PresentationFactory", 0);
        
        presentationFactory.method<&AsposePhp::PresentationFactory::__construct>("__construct", Php::Public, {});
        presentationFactory.method<&AsposePhp::PresentationFactory::GetPresentationText>("GetPresentationText",{ 
            Php::ByVal("path", Php::Type::String, true) 
        });


        // PresentationText

        Php::Class<AsposePhp::PresentationText> presentationText("PresentationText", 0);
        presentationText.method<&AsposePhp::PresentationText::__construct>("__construct", Php::Public, {});
        presentationText.method<&AsposePhp::PresentationText::get_SlidesText>("get_SlidesText", Php::Public, {});
        
         // SlideText

        Php::Class<AsposePhp::SlideText> slideText("SlideText", 0);
        slideText.method<&AsposePhp::SlideText::__construct>("__construct", Php::Public, {});
        slideText.method<&AsposePhp::SlideText::get_Text>("get_Text", {});
        slideText.method<&AsposePhp::SlideText::get_MasterText>("get_MasterText", {});
        slideText.method<&AsposePhp::SlideText::get_LayoutText>("get_LayoutText", {});
        slideText.method<&AsposePhp::SlideText::get_NotesText>("get_NotesText", {});
        
         // NotesSlideManager

        Php::Class<AsposePhp::NotesSlideManager> notesSlideManager("NotesSlideManager", 0);
        notesSlideManager.method<&AsposePhp::NotesSlideManager::__construct>("__construct", Php::Public, {});
        notesSlideManager.method<&AsposePhp::NotesSlideManager::get_NotesSlide>("get_NotesSlide", Php::Public, {});


              
         // NotesSlide

        Php::Class<AsposePhp::NotesSlide> notesSlide("NotesSlide", 0);
        notesSlide.method<&AsposePhp::NotesSlide::__construct>("__construct", Php::Public, {});
        notesSlide.method<&AsposePhp::NotesSlide::get_NotesTextFrame>("get_NotesTextFrame", Php::Public, {});

                      
         // TextFrame

        Php::Class<AsposePhp::TextFrame> textFrame("TextFrame", 0);
        textFrame.method<&AsposePhp::TextFrame::__construct>("__construct", Php::Public, {});
        textFrame.method<&AsposePhp::TextFrame::get_Text>("get_Text", Php::Public, {});
        
        

        // AsposeUtil

        Php::Class<AsposeUtil> util("AsposeUtil");

        util.method<&AsposeUtil::getVersion>("getVersion", { 
            Php::ByVal("slideNo", Php::Type::Numeric, true) 
        });

        // Slide

        Php::Class<AsposePhp::Slide> slide("Slide");

        slide.method<&AsposePhp::Slide::getSlideNumber>("getSlideNumber", {});
        slide.method<&AsposePhp::Slide::getSlideText>("getSlideText", {});
        slide.method<&AsposePhp::Slide::getLayoutText>("getLayoutText", {});
        slide.method<&AsposePhp::Slide::getMasterText>("getMasterText", {});
        slide.method<&AsposePhp::Slide::getNotesText>("getNotesText", {});
        slide.method<&AsposePhp::Slide::get_NotesSlideManager>("get_NotesSlideManager", {});


        ns.add<AsposeUtil>("AsposePoseUtil");
        ns.add<AsposePhp::Presentation>("Presentation");
        ns.add<AsposePhp::PresentationFactory>("PresentationFactory");
        ns.add<AsposePhp::Slide>("Slide");

        extension.add(std::move(textFrame));
        extension.add(std::move(notesSlide));
        extension.add(std::move(notesSlideManager));
        extension.add(std::move(slideText));
        extension.add(std::move(presentationFactory));
        extension.add(std::move(presentationText));
        extension.add(std::move(col));
        extension.add(std::move(util));
        extension.add(std::move(slide));
        extension.add(std::move(pres));
        extension.add(std::move(ns));

        return extension;
    }
}
