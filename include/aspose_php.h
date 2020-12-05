
#include "../include/aspose.h"
#include <phpcpp.h>
//#include <iostream>
//#include <typeinfo>

using namespace Aspose::Slides;
using namespace std;

#ifndef ASPOSEPHP_H
#define ASPOSEPHP_H

namespace AsposePhp {

    /**
     * @brief This is the wrapper class we use to wrap Aspose objects. It's also the base class of all AsposePhp classes.
     * It implementes the constructor, destructor and some usefule helper methods.
     * 
     * @tparam T The Aspose Class we wanna wrap.
     */
    template <typename T>
    class AsposeObjectWrapper
    {
        protected: 
            System::SharedPtr<T> _asposeObj;
        public:
            AsposeObjectWrapper(System::SharedPtr<T> asposeObj) : _asposeObj(asposeObj) {};
            virtual ~AsposeObjectWrapper() {
                _asposeObj.reset();
            };
            
            void __construct(Php::Parameters &params) {};

            /**
             * @brief A template fucntion which creates a PHP comatible a wrapper for an Aspose object.
             * The result will be returned to PHP as object (instance).
             * 
             * @tparam AsposeType The Apspose class whose instance is to be wrapped
             * @tparam AsposePhpType The corresponding AsposePhp type.
             * @tparam Method the method to call from this class that returns an instance of AposeType
             * @tparam Args 0 or more arguments to be passed to Method
             * @param args 
             * @return AsposePhpType* pointer
             */
            template <typename AsposeType, typename AsposePhpType, auto Method, class ...Args>
            AsposePhpType * wrapObject(Args &&... args)
            {
                System::SharedPtr<AsposeType> obj = (*_asposeObj.*Method)(args...);
                AsposePhpType * phpValue = new AsposePhpType(obj); 
                return phpValue;
            }

    };

}

#endif
