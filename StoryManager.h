#pragma once
#include <string>
#include <unordered_map>

class StoryManager {
 public:
  std::string currentRoom_;
  std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms_;
  std::string storyName_;
  std::string storyLine_;
  int numberEnemies_;
  int reward_;

  StoryManager(std::string currentRoom, std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms, std::string storyName, std::string storyline, int numberEnemies, int reward);
  virtual void displayStory() = 0;
};
