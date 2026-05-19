#pragma once
#include <string>

class Player {
 public:
  std::string name_;
  std::string race_;
  int health_;
  int age_;
  int attackPower_;
  Player(std::string name, std::string race, int health, int age, int attackPower);
};

void attackNow();
