#pragma once
#include <vector>
#include "Item.h"

class Player;

class Inventory {
 public:
  std::vector<Item*> backpack_;
  Inventory(std::vector<Item*> backpack);
  void showInventory();
  void useItem(int index, Player& player);
  void addItem(Item& item);
  void deleteItem(int index);
};
