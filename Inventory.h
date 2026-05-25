#pragma once
#include <string>

class Item;


class Inventory {
  public:
    vector<Item> backpack_;
    Vector(vector<Item> backpack);
    void useItem(int index);
    void addItem(Item& item);
    void deleteItem(Item& item);
}
