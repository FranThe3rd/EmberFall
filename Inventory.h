#pragma once
#include <string>
#include <vector>

class Item;
class Player;


class Inventory {
  public:
    vector<Item> backpack_;
    Vector(vector<Item> backpack);
    void showInventory();
    void useItem(int index, Player& player);
    void addItem(Item& item);
    void deleteItem(Item& item);
}
