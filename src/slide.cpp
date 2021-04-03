#include "../include/aspose.h"
#include "../include/slide.h"
#include "../include/notes_slide_manager.h"
#include "../include/shape_collection.h"
#include "../include/layout_slide.h"
#include "../include/util.h"
#include "../include/bitmap.h"
#include <phpcpp.h>

using namespace Aspose::Slides;
using namespace Aspose::Slides::Charts;
using namespace System::Drawing::Imaging;
using namespace System::IO;
using namespace System;
using namespace std;

namespace AsposePhp
{

    /**
     * @brief PHP constructor
     * 
     * @param params 
     */
    void Slide::__construct(Php::Parameters &params)
    {
    }

    System::SharedPtr<Aspose::Slides::ISlide> Slide::getAsposeClass()
    {
        return _slide;
    }

    /**
     * @brief Alias to get_SlideNumber(). 
     * @deprecated Don't use.
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getSlideNumber()
    {
        return this->get_SlideNumber();
    }

    /**
     * @brief Returns the index of this slide
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.slide#ac8e47ca972db2444c43f311925bcc76f
     * @return Php::Value 
     */
    Php::Value Slide::get_SlideNumber()
    {
        return _slide->get_SlideNumber();
    }

    /**
     * @brief Returns all text from slide (charts, tables excluded)
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getSlideText()
    {
        return _text;
    }

    /**
     * @brief Returns the layout text
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getLayoutText()
    {
        return _layoutText;
    }

    /**
     * @brief Returns the master text
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getMasterText()
    {
        return _masterText;
    }

    /**
     * @brief Returns the notes text
     * 
     * @return Php::Value 
     */
    Php::Value Slide::getNotesText()
    {
        return _notesText;
    }

    /**
     * @brief Returns the SlideManager instance.
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.slide#a21a2f29db2277133cb09aaf0d39ff9ca
     * @return Php::Value 
     */
    Php::Value Slide::get_NotesSlideManager()
    {
        SharedPtr<INotesSlideManager> slideManager = _slide->get_NotesSlideManager();
        NotesSlideManager *phpValue = new NotesSlideManager(slideManager);
        return Php::Object("AsposePhp\\Slides\\NotesSlideManager", phpValue);
    }

    /**
     * @brief Returns the shape collection
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.base_slide#a23c7b4b3c1d8274a151fa2474bf7d0d3
     * @return Php::Value 
     */
    Php::Value Slide::get_Shapes()
    {
        SharedPtr<IShapeCollection> shapes = _slide->get_Shapes();
        ShapeCollection *phpValue = new ShapeCollection(shapes);
        return Php::Object("AsposePhp\\Slides\\ShapeCollection", phpValue);
    }

    /**
     * @brief Removes slide from presentation
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.slide#a432dc33785820c6c480d40e0e19f95ac
     */
    void Slide::Remove()
    {
        _slide->Remove();
    }

    /**
     * @brief Returns the layout slide for the current slide
     * @see https://apireference.aspose.com/slides/cpp/class/aspose.slides.slide#a56b36c32cb9e5db97cdbc7e8248f6fa8
     * @return Php::Value 
     */
    Php::Value Slide::get_LayoutSlide()
    {
        SharedPtr<ILayoutSlide> slide = _slide->get_LayoutSlide();
        LayoutSlide *phpValue = new LayoutSlide(slide);
        return Php::Object("AsposePhp\\Slides\\LayoutSlide", phpValue);
    }

    /**
     * @brief Returns a Thumbnail image with custom scaling, either as byte array or string 
     * 
     * @param params Php::Parameters
     * @param params[0] float scaleX The value by which to scale this Thumbnail in the x-axis direction 
     * @param params[1] float scaleY The value by which to scale this Thumbnail in the y-axis direction
     * @param params[2] string format The output image format (jpeg or png) 
     * @param params[3] bool asArray If true, a byte array is returned.

     * @return Php::Value 
     */
    Php::Value Slide::GetThumbnail(Php::Parameters &params)
    {
        float scaleX = params[0].floatValue();
        float scaleY = params[1].floatValue();
        std::string format = params[2].stringValue();
        bool asArray = params[3].boolValue();

        const ImageFormatPtr png = System::Drawing::Imaging::ImageFormat::get_Png();
        const ImageFormatPtr jpeg = System::Drawing::Imaging::ImageFormat::get_Jpeg();
        
        if (format != "png" && format != "jpeg")
        {
            throw Php::Exception("Invalid format: " + format);
        }

        try
        {
            SharedPtr<System::Drawing::Bitmap> bmp = _slide->GetThumbnail(scaleX, scaleY);
            SharedPtr<MemoryStream> stream = MakeObject<MemoryStream>();

            bmp->Save(stream, format == "png" ? png : jpeg);
            vector<uint8_t> res = stream->ToArray()->data();

            if(asArray) {
                return Php::Array(res);
            } else {
                std::string str;
                str.assign(res.begin(), res.end());
                return str;
            }
        }
        catch (std::exception &e)
        {
            throw Php::Exception(e.what());
        }
    }

    /**
     * @brief Returns all shapes of given type from a slide
     * 
     * @param slide The slide object
     * @param shapeName The name / type of the shape to return
     * @return vector<SharedPtr<Chart>> 
     */
    vector<SharedPtr<Chart>> Slide::getShapes(SharedPtr<ISlide> slide, String shapeName)
    {
        SharedPtr<IShapeCollection> shapes = slide->get_Shapes();
        int32_t numShapes = shapes->get_Count();

        vector<SharedPtr<Chart>> retShapes;

        for (int i = 0; i < numShapes; i++)
        {
            SharedPtr<IShape> shape = shapes->idx_get(i);
            if (ObjectExt::GetType(shape).get_Name() == shapeName)
            {
                retShapes.push_back(DynamicCast<Chart>(shape));
            }
        }

        return retShapes;
    }

    /**
     * @brief Returns all text frames from a slide as string.
     * 
     * @param slide Slide The slide object
     * @return std::string 
     */
    std::string Slide::getAllText(SharedPtr<ISlide> slide)
    {

        string text;

        ArrayPtr<SharedPtr<ITextFrame>> textFramesSlide = Util::SlideUtil::GetAllTextBoxes(slide);

        for (int i = 0; i < textFramesSlide->get_Length(); i++)
        {
            SharedPtr<ITextFrame> textFrame = textFramesSlide->idx_get(i);
            for (int paragraph_index = 0; paragraph_index < textFrame->get_Paragraphs()->get_Count(); ++paragraph_index)
            {
                SharedPtr<IParagraph> paragraph = textFrame->get_Paragraphs()->idx_get(paragraph_index);
                for (int portion_index = 0; portion_index < paragraph->get_Portions()->get_Count(); ++portion_index)
                {
                    SharedPtr<IPortion> portion = paragraph->get_Portions()->idx_get(portion_index);
                    text += portion->get_Text().ToUtf8String();
                }
            }
        }

        return text;
    }

} // namespace AsposePhp
