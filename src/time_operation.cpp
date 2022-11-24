#include "common.h"

int poll_state(bool *p, int timeout /*ms*/) {
    auto start = std::chrono::system_clock::now();
    while (*p == false)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(25));
        auto end = std::chrono::system_clock::now();
        if (std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() > timeout)
        {
            std::cout << "time out" << std::endl;
            return -1;
        }
    }
    return 0;
}

int test_poll_state() {
    bool p = false;
    poll_state(&p, 3 * 1000);
    return 0;
}
