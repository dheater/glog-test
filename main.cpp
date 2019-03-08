#include <iostream>
#include <glog/logging.h>

int main()
{
    google::InitGoogleLogging("foo");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}