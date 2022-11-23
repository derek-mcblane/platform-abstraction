#include "platform-implementation.h"

#include <iostream>

void UnixImpl::hello_impl() const {
    std::cout << "What's up, homie?\n";
}
