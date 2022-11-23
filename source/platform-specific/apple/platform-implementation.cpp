#include "platform-implementation.h"

#include <iostream>

void AppleImpl::hello() const {
    std::cout << "What's up, my guy?\n";
    std::cout << "id: " << id << '\n';
}
