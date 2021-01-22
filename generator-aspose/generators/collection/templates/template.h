#include <phpcpp.h>
#include "../include/aspose.h"
#include "../include/collection.h"
#include "../include/aspose_php.h"

#ifndef <%= capName %>_H
#define <%= capName %>_H

using namespace <%= ns %>;

namespace AsposePhp {

    class <%= phpName %>  : public AsposeObjectWrapper<<%= className %>>, public Collection<<%= className %>>, public Php::Base
    {
        public:
            <%= phpName %>(System::SharedPtr<<%= className %>> col) : AsposeObjectWrapper<<%= className %>>(col), Collection<<%= className %>>(col) {};
            void __construct(Php::Parameters &params);
            Php::Value idx_get(Php::Parameters &params);
            Php::Value get_Count();
            <% for (let i=0; i<methods.length; i++) { %>
            Php::Value <%= phpName %>::<%= methods[i].methodName %> {
                return nullptr;
            }
            <% } %>

    };

}

#endif
