#include "Player.h"
#include "Enemy.h"
#include <string>

Player::Player(std::string name, std::string race, int health, int age, int attackPower)
    : name_(name), race_(race), health_(health), age_(age), attackPower_(attackPower) {}

void Player::attackNow(Enemy& enemy) {
  enemy.takeDamage(attackPower_);
}

void Player::takeDamage(int damage) {
  health_ -= damage;
}

void Player::heal(int amount) {
  health_ += amount;
}
