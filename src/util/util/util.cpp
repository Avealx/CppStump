#include <util/util.h>

#include <iostream>

int util::foo() {
    return 42;
}

void util::say_hello() {
    std::cout << "Hello util!" << std::endl;
}
