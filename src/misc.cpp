
#include "common.h"

int test_PP_NARG() {
    TRACE("%s has %d args\n", STRINGIFY(PP_NARG(a, b, c, d)), PP_NARG(a, b, c, d));
    TRACE("%s\n", EXPRESSION(PP_NARG(a, b, c, d)));
    return 0;
}
