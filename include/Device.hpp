#ifndef DEVICE_HPP
#define DEVICE_HPP
#include <iostream>

#include "Memento.hpp"

class Device
{
public:
    virtual void setState(int state) = 0;
    virtual Memento save() = 0;
};

#endif