#include <execinfo.h>
#include <iostream>
#include <sstream>
#include "common.h"

#define printStackTrace() do { \
         const int MAX_FRAMES = 64; \
         void* frames[MAX_FRAMES]; \
         int num_frames = backtrace(frames, MAX_FRAMES); \
         char** symbols = backtrace_symbols(frames, num_frames); \
         std::ostringstream oss; \
         oss << "Stack trace:" << std::endl; \
         for (int i = 0; i < num_frames; i++) { \
             oss << "\t" << symbols[i] << std::endl; \
         } \
         free(symbols); \
         printf("%s bt: %s\n", __FUNCTION__, oss.str().c_str()); \
     } while(0)


int test_bt() {
    TRACE(">>>>> test_bt\n");
    printStackTrace();
    TRACE("<<<<< test_bt\n");
    return 0;
}

