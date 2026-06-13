#include "LevelOne.h"
#include <iostream>
#include <unordered_map>
LevelOne::LevelOne(
    std::string currentRoom,
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms,
    std::string storyName,
    std::string storyline,
    int numberEnemies,
    int reward
    )
  : StoryManager("Burger King Parking Lot", 
      // Beginning of Rooms
      // {
      //
      // 
      {"Burger King Parking Lot", {
      {"description", "You are standing in a Burger King parking lot."},
      {"north", "Gas Station"},
      {"south", "Highway"}
      }},

      {"Gas Station", {
      {"description", "A sketchy gas station with flickering lights."},
      {"south", "Burger King Parking Lot"}
      }},

      {"Highway", {
      {"description", "Cars speed by at dangerous speeds."},
      {"north", "Burger King Parking Lot"}
      }},}
      // End of Rooms
      "Beggining Of The Ember's",
      "Alright we are currently inside of burgerking, we need to find a way to find your family safely, there is too many evil people trying to kill you, lock in little bro", 
      1, 
      10) {}

      void LevelOne::displayStory() {
        TextAnimation textAnimation(storyLine_);
        std::cout<< "LevelOne: " << storyName_ << "Number Of Enemies: " << numberEnemies_ << "\n";
        textAnimation.printMessage();
      }
