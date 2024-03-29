#include <iostream>
#include <thread>
#include <future>
#include <sstream>
using namespace std;


int test_thread_id() {
    auto myid = this_thread::get_id();
    stringstream ss;
    ss << myid;
    string mystring = ss.str();
    cout << mystring << endl;
    cout << std::hash<std::thread::id>{}(std::this_thread::get_id()) << endl;
    return 0;
}
