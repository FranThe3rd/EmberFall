#pragma once
#include <string>

class Enemy;
class Weapon;

class Player {
 public:
  std::string name_;
  std::string race_;
  int health_;
  int age_;
  Weapon weapon_;
  Player(std::string name, std::string race, int health, int age, Weapon weapon);

  void takeDamage(int damage);
  void attackNow(Enemy& enemy);
  void heal(int amount);
};
