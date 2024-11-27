#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include <iostream>
#include <vector>

#include "Device.hpp"
#include "Memento.hpp"

class Caretaker {
 private:
  std::vector<Memento *> history;
  Device &device;

 public:
  Caretaker(Device &device);
  void save();
  void undo();
};

#endif