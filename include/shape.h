#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

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
            Shape(System::SharedPtr<IShape> shape) : AsposeObjectWrapper<IShape>(shape) {};
            
            void __construct(Php::Parameters &params);
            
            Php::Value isTable();
            Php::Value isChart();
            Php::Value isGroupShape();
            Php::Value get_AlternativeText();

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
