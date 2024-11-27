#include <iostream>

#include "include/CareTaker.hpp"
#include "include/Light.hpp"

int main() {
  Light light(0);
  Caretaker caretaker(light);

  std::cout << "Initial state: " << light.getState() << std::endl;

  light.setState(1);
  std::cout << "State set to: " << light.getState() << std::endl;
  caretaker.save();
  std::cout << "State saved." << std::endl;

  light.setState(2);
  std::cout << "State set to: " << light.getState() << std::endl;
  caretaker.save();
  std::cout << "State saved." << std::endl;

  light.setState(3);
  std::cout << "State set to: " << light.getState() << std::endl;
  caretaker.save();
  std::cout << "State saved." << std::endl;

  light.setState(4);
  std::cout << "State set to: " << light.getState() << std::endl;
  caretaker.save();
  std::cout << "State saved." << std::endl;

  caretaker.undo();
  std::cout << "Undo performed: " << light.getState() << std::endl;

  caretaker.undo();
  std::cout << "Undo performed: " << light.getState() << std::endl;

  caretaker.undo();
  std::cout << "Undo performed: " << light.getState() << std::endl;

  caretaker.undo();
  std::cout << "Undo performed: " << light.getState() << std::endl;

  return 0;
}