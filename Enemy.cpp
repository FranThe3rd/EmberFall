#include "Enemy.h"
#include <string>

Enemy::Enemy(std::string name,  int health, int attackPower): name_{name}, health_{health},attackPower_{attackPower} {};

void Enemy::attackPlayer(Player& player) {
    player.takeDamage(attackPower_);
}

void takeDamage(int damage) {
  health_ -= damage;
}


