#pragma once

class PlatformBase {
public:
    PlatformBase() : id(10) {}
 
    virtual void hello() const = 0;

protected:
    int id;
};

