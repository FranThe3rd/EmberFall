#include "Player.h"
#include "Enemy.h"
#include "Weapon"
#include <string>

Player::Player(std::string name, std::string race, int health, int age, Weapon weapon)
    : name_{name}, race_{race}, health_{health}, age_{age}, weapon_{weapon_} {};

void Player::attackNow(Enemy& enemy) {
  enemy.takeDamage(weapon.attackPower_);
}

void Player::takeDamage(int damage) {
  health_ -= damage;
}

void Player::heal(int amount) {
  health_ += amount;
}
