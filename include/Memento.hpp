#ifndef MEMENTO_HPP
#define MEMENTO_HPP

class Memento {
 public:
  virtual void restore() = 0;
  virtual int getState() = 0;
};

#endif