#include "common.h"

using namespace std;


string getAddress(const void *p) {
    char buf[64] = {0};
    snprintf(buf, sizeof(buf), "%p", p);
    return buf;
}

int test_getAddress() {
    int *p = new int;
    TRACE("%s\n", getAddress(p).c_str());
    delete p;
    return 0;
}
