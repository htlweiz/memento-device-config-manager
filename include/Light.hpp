#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Device.hpp"
#include "LightMemento.hpp"

class Light : public Device {
 public:
  int state;

  Light(int state) : state(state) {}

  void setState(int state) override { this->state = state; }

  int getState() override { return state; }

  Memento *save() override { return new LightMemento(state); }
};

#endif