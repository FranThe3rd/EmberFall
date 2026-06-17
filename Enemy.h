
#pragma once
#include <string>

class Player;

class Enemy {
 public:
  std::string name_;
  std::string location_;
  int health_;
  int attackPower_;
  Enemy(std::string name, std::string location, int health, int attackPower);

  void attackPlayer(Player& player);
  void takeDamage(int damage);
};
