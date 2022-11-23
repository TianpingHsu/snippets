#include "common.h"

extern int test_getAddress();
extern int test_write_bin_file();

int main() {
    std::vector< std::future<int> > results;
    {
        results.push_back(ATHENA->enqueue(test_getAddress));
        results.push_back(ATHENA->enqueue(test_write_bin_file));
    }

    for (auto && result : results) {
        result.get();
    }
    return 0;
}
