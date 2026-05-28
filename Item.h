#pragma once
#include <string>

class Player;

class Item {
 public:
  std::string name_;
  int itemEffect_; Item(std::string name, int itemEffect);
  virtual void use(Player& player) = 0;
};
