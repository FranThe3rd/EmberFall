#pragma once

#include "StoryManager.h"

class GameEngine {
  private:
    bool game_;
    StoryManager* storyManager_;
  public:
    GameEngine(StoryManager* storyManager);
    bool isGameRunning();
    void gameStart();
    void gameEnd();
    void run();
};
