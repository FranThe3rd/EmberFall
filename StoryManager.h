#pragma once
#include <string>

class StoryManager {
 public:
  std::string storyName_;
  std::string storyLine_;
  int numberEnemies_;
  int reward_;

  StoryManager(std::string storyName, std::string storyline, int numberEnemies, int reward);
  virtual void displayStory() = 0;
};
