#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/aspose_php.h"

#ifndef <%= capName %>_H
#define <%= capName %>_H

using namespace <%= ns %>;

namespace AsposePhp {

    class <%= phpName %> : public AsposeObjectWrapper<<%= className %>>, public Php::Base
    {
        public:
            <%= phpName %>(System::SharedPtr<<%= className %>> obj) : AsposeObjectWrapper<<%= className %>>(obj) {};
            void __construct(Php::Parameters &params);
             <% for (let i=0; i<methods.length; i++) { %>
            Php::Value <%= methods[i].methodName %>();
            <% } %>

    };

}

#endif
