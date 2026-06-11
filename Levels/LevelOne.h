#pragma once
#include <string>
#include <unordered_map>
#include "../StoryManager.h"
#include "../TextAnimation.h"

class LevelOne : public StoryManager {
 public:
  LevelOne(std::string currentRoom, std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms, std::string storyName, std::string storyline, int numberEnemies, int reward);

  void displayStory() override {
    TextAnimation anim(storyLine_);
    anim.printMessage();
  }
};
