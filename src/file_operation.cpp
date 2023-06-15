#include "common.h"

void write_bin_file(const std::string bin_file_name, const char* p, size_t len) {
    std::ofstream ofs;
    ofs.open(bin_file_name, std::ios::app|std::ios::binary);
    ofs.write(p, len);
    ofs.close();
}

int test_write_bin_file() {
    std::string s = "hello world!";
    write_bin_file("./test.bin", s.c_str(), s.size());
    TRACE("write hello world to ./test.bin\n");
    return 0;
}
