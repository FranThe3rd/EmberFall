#include "LevelOne.h"
#include <iostream>
#include <unordered_map>
#include "../TextAnimation.h"

LevelOne::LevelOne()
  : StoryManager(
      "Burger King Parking Lot",
      {
        {
          "Burger King Parking Lot",
          {
            {"description", "You are standing in a Burger King parking lot."},
            {"north", "Gas Station"},
            {"south", "Highway"}
          }
        },

        {
          "Gas Station",
          {
            {"description", "A sketchy gas station with flickering lights."},
            {"south", "Burger King Parking Lot"}
          }
        },

        {
          "Highway",
          {
            {"description", "Cars speed by at dangerous speeds."},
            {"north", "Burger King Parking Lot"}
          }
        }
      },
      "Beggining Of The Embers",
      "Alright we are currently inside of burgerking, we need to find a way to find your family safely, there is too many evil people trying to kill you, lock in little bro",
      {
        Enemy("Bandit", "Gas Station", 30, 5)
      },
      10
    ) {}

  void LevelOne::displayStory() {
    TextAnimation textAnimation(storyLine_);
    std::cout << "LevelOne: " << storyName_ << "Number Of Enemies: " << numberEnemies_ << "\n";
    textAnimation.printMessage();
  }
