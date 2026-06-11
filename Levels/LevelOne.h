#pragma once
#include "../StoryManager.h"
#include "../TextAnimation.h"

class LevelOne : public StoryManager {
  public:
    LevelOne(std::string storyName, std::string storyline, int numberEnemies, int reward)
        : StoryManager(storyName, storyline, numberEnemies, reward) {}

    void displayStory() override {
        TextAnimation anim(storyLine_);
        anim.printMessage();
    }
};
