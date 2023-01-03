#include "common.h"

extern int test_getAddress();
extern int test_write_bin_file();
extern int test_poll_state();
extern int test_dec_hex();

int main() {
    std::vector< std::future<int> > results;
    {
        results.push_back(ATHENA->enqueue(test_getAddress));
        results.push_back(ATHENA->enqueue(test_write_bin_file));
        results.push_back(ATHENA->enqueue(test_poll_state));
        results.push_back(ATHENA->enqueue(test_dec_hex));
    }

    for (auto && result : results) {
        result.get();
    }
    return 0;
}
