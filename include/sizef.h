#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

using namespace System::Drawing;

#ifndef SIZEF_H
#define SIZEF_H

namespace AsposePhp {

    class SizeF : public Php::Base
    {
        private: 
            System::Drawing::SizeF _asposeObj;
        public:
            SizeF() = default;
            SizeF(System::Drawing::SizeF asposeObj) : _asposeObj(asposeObj) {};
            virtual ~SizeF() {};
            
            void __construct(Php::Parameters &params);
            Php::Value get_Width();
            Php::Value get_Height();

    };

}

#endif
