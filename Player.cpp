#include "Player.h"
#include <string>

Player::Player(std::string name, std::string race, int health, int age, int attackPower)
    : name_(name), race_(race), health_(health), age_(age), attackPower_(attackPower) {};

void attackNow() {};
