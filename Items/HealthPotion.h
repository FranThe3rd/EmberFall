#pragma once
#include <string>
#include "../Item.h"

class HealthPotion : public Item {
 public:
  HealthPotion(int healAmount);
  void use(Player& player) override;
};
