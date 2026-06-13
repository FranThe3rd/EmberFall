#pragma once
#include <string>
#include <unordered_map>
#include "../StoryManager.h"
#include "../TextAnimation.h"

class LevelOne : public StoryManager {
  public:
    LevelOne();
    void displayStory() override; 
};
