#include <phpcpp.h>

#ifndef ASPOSE_UTIL_H
#define ASPOSE_UTIL_H

namespace AsposePhp {

    class AsposeUtil : public Php::Base 
    {
        public:
            AsposeUtil() = default;
            virtual ~AsposeUtil() = default;
            static Php::Value getVersion();

    };

}

#endif