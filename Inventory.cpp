#include "Inventory.h"
#include <iostream>
#include <vector>
#include "Player.h"

Inventory::Inventory(std::vector<Item*> backpack) : backpack_{backpack} {}

void Inventory::showInventory() {
  std::cout << "---------------------";
  for (int i = 0; i < backpack_.size(); i++) {
    std::cout << i + 1 << "Item: " << backpack_[i]->name_;
  }
  std::cout << "---------------------";
}

void Inventory::useItem(int index, Player& player) {
  backpack_[index]->use(player);
}

void Inventory::addItem(Item& item) {
  backpack_.push_back(&item);
}

void Inventory::deleteItem(int index) {
  backpack_.erase(backpack_.begin() + index);
}
