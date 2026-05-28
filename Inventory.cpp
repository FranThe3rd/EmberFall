#include "Inventory.h"
#include <iostream>
#include <vector>
#include "Player.h"

Inventory::Inventory(vector<Item> backpack) = backpack_{backpack}  {};

void showInventory() {
  std::cout << "---------------------";
  for (int i = 0 i < backpack_.length(); i++) {
    cout << i+1 << "Item: " << backpack_[i];
  }
  std::cout << "---------------------";
}

void useItem(int index, Player& player) {
  backpack_[index].use(player)
}

void addItem(Item& item) {
  backpack_.push_back(item)
}

void deleteItem(int index) {
  backpack_.erase(backpack_.begin()+index)
}

