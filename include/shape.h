#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

using namespace Aspose::Slides::Charts;

#ifndef SHAPE_H
#define SHAPE_H

namespace AsposePhp {

    class Shape : public AsposeObjectWrapper<IShape>, public Php::Base
    {
        private:
            /**
             * @brief Checks if shape is of type T. 
             * 
             * @tparam T 
             * @return true 
             * @return false 
             */
            template <typename T>
            bool isShape() {
                try {
                    System::SharedPtr<T> shape = System::DynamicCast<T>(_asposeObj);
                }
                catch(System::InvalidCastException & e) {
                    return false;
                }

                return true;
            }
        public:
            Shape();
            Shape(System::SharedPtr<IShape> shape) : AsposeObjectWrapper<IShape>(shape) {};
            
            void __construct(Php::Parameters &params);
            
            Php::Value isTable();
            Php::Value isChart();
            Php::Value isGroupShape();
            Php::Value isAutoShape();
            Php::Value isPictureFrame();
            Php::Value isConnector();
            Php::Value get_Name();
            Php::Value get_AlternativeText();
            Php::Value get_UniqueId();
            Php::Value get_IsGrouped();
            Php::Value get_FillFormat();
            Php::Value get_ParentGroup();
            Php::Value get_Height();
            Php::Value get_Width();

            /**
             * @brief Converts Shape to type T and returns a smart pointer or null, if cannot be converted.
             * 
             * @tparam T Type to convert to
             * @param ptr The IShape ptr to be converted
             * @return System::SharedPtr<T> 
             */
            template <typename T>
            static System::SharedPtr<T> convert(System::SharedPtr<IShape> ptr) {
                try {
                    System::SharedPtr<T> shape = System::DynamicCast<T>(ptr);
                    return shape;
                }
                catch(System::InvalidCastException & e) {
                    return nullptr;
                }
            }


    };

}

#endif
