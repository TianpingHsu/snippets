#include "common.h"

void print_buf(const char *buf, size_t size) {
    static char tmp[128] = {0};
    if (size > 0) {
        snprintf(tmp, std::min(size + 1, sizeof(tmp)), "%s", buf);
    }
}
