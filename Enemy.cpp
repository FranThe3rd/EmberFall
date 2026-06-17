#include "Enemy.h"
#include "Player.h"
#include <string>

Enemy::Enemy(std::string name, std::string location, int health, int attackPower)
    : name_{name}, location_{location}, health_{health}, attackPower_{attackPower} {}

void Enemy::attackPlayer(Player& player) {
  player.takeDamage(attackPower_);
}

void Enemy::takeDamage(int damage) {
  health_ -= damage;
}
