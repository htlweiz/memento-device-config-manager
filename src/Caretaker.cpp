#include "../include/CareTaker.hpp"

Caretaker::Caretaker(Device& device) : device(device) {}

void Caretaker::save() { history.push_back(device.save()); }

void Caretaker::undo() {
  if (!history.empty()) {
    Memento* memento = history.back();
    history.pop_back();
    device.setState(memento->getState());
    delete memento;
  } else {
    std::cout << "No more states to undo." << std::endl;
  }
}