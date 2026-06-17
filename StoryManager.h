#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include "Enemy.h"

class StoryManager {
 public:
  std::string currentRoom_;
  std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms_;
  std::string storyName_;
  std::string storyLine_;
  std::vector<Enemy> enemies_;
  int numberEnemies_;
  int reward_;

  StoryManager(std::string currentRoom, std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms, std::string storyName, std::string storyline, std::vector<Enemy> enemies, int reward);
  virtual ~StoryManager() = default;
  virtual void displayStory() = 0;
};
