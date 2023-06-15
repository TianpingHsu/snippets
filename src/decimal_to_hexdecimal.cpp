#include "common.h"

/*
std::string decimal_to_hexadecimal(long long n) {
    char buf[64] = {0};
    itoa(n, buf, 16);
    return buf;
}
*/

std::string decimal_to_hexadecimal(int n) {
    char buf[64] = {0};
    snprintf(buf, sizeof(buf), "%x", (unsigned int)n);
    return buf;
}

int test_dec_hex() {
    int n = -1;
    TRACE("%s\n", decimal_to_hexadecimal(n).c_str());
    return 0;
}
