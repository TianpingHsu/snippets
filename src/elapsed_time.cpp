#include <string>
#include <ctime>
#include <iostream>
class CElapsedTime {
public:
       CElapsedTime(const std::string& s): id(s), start_time(clock()) {
       }
    void check(const std::string& func, int l) {
        clock_t tmp = clock();
        double duration = static_cast<double>(tmp - start_time) / CLOCKS_PER_SEC;
        std::cout << func << " [" << l << "] duration: " << duration << " with start: " << start_time << " current: " << tmp << " this: " << this;
    }
    ~CElapsedTime() {
        end_time = clock();
        double duration = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
        std::cout << id << " duration: " << duration << " with start: " << start_time << " end_time: " << end_time;
    }
private:
       std::string id;
    clock_t start_time, end_time;
};

