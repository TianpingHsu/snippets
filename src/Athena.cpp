#include "common.h"

//extern int test_getAddress();
//extern int test_write_bin_file();
//extern int test_poll_state();
//extern int test_dec_hex();
//extern int test_PP_NARG();
//extern int test_thread_id();
//extern int test_bt();

#define ADD_TEST_TASK(task_name)  do { \
    extern int task_name(); \
    results.push_back(ATHENA->enqueue(task_name)); \
} while (0)



int main() {
    std::vector< std::future<int> > results;
    ADD_TEST_TASK(test_getAddress);
    ADD_TEST_TASK(test_write_bin_file);
    ADD_TEST_TASK(test_poll_state);
    ADD_TEST_TASK(test_dec_hex);
    ADD_TEST_TASK(test_PP_NARG);
    ADD_TEST_TASK(test_thread_id);
    ADD_TEST_TASK(test_bt);
    /*
    {
        results.push_back(ATHENA->enqueue(test_getAddress));
        results.push_back(ATHENA->enqueue(test_write_bin_file));
        results.push_back(ATHENA->enqueue(test_poll_state));
        results.push_back(ATHENA->enqueue(test_dec_hex));
        results.push_back(ATHENA->enqueue(test_PP_NARG));
        results.push_back(ATHENA->enqueue(test_thread_id));
        results.push_back(ATHENA->enqueue(test_bt));
    }
    */

    for (auto && result : results) {
        result.get();
    }
    return 0;
}

