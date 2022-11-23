#pragma once

#include "platform-base.h"

class LinuxImpl : public PlatformBase {
public:
    virtual void hello() const;
};
