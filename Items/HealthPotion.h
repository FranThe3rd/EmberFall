#pragma once
#include <string>
#include "../Item.h"


class HealthPotion:Item {

  public:
    std::string name_;
    HealthPotion(int healAmount);
    void Item::use (Player& player) override;
};
