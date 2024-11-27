#ifndef LIGHT_MEMENTO_HPP
#define LIGHT_MEMENTO_HPP

#include <iostream>

#include "Memento.hpp"

class LightMemento : public Memento {
 public:
  int state;

  LightMemento(int state) : state(state) {}

  int getState() { return state; }

  void restore() override {
    std::cout << "Restoring state " << state << std::endl;
  }
};

#endif