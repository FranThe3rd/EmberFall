#pragma once
#include <string>



class Weapon {
  public:
    std::string name_;
    int attackPower_;
    Weapon(std::string name, int attackPower);
};

