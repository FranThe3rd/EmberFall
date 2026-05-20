#include "HealthPotion.h"



HealthPotion::HealthPotion(int healAmount) 
  : Item("Health Potion", healAmount) {}

void HealthPotion::use(Player& player) {
    player.heal(itemEffect_);
}
