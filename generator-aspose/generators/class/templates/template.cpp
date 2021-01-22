#include "../include/aspose.h"
#include "../include/<%= kebabPhpName %>.h"
#include <phpcpp.h>

using namespace <%= ns %>;

using namespace std;

namespace AsposePhp {

 <% for (let i=0; i<methods.length; i++) { %>
    Php::Value <%= phpName %>::<%= methods[i].methodName %>() {
        return nullptr;
    }
 <% } %>

}
