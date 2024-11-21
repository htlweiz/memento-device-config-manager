#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include <vector>
#include "Memento.hpp"
#include "Device.hpp"

class Caretaker
{
private:
    std::vector<Memento> history;
    Device &device;

public:
    Caretaker(Device &device);

    void save();
    void undo();
};

#endif