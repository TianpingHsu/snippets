#include "common.h"

extern int test_getAddress();

int main() {
    std::vector< std::future<int> > results;
    {
        results.push_back(ATHENA->enqueue(test_getAddress));

    }

    for (auto && result : results) {
        result.get();
    }
    return 0;
}
