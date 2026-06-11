#include "StoryManager.h"
#include "TextAnimation.h"
#include <string>

StoryManager(std::string storyName, std::string storyline, int numberEnemies, int reward_) : 
  storyName_{storyName}, storyLine_{storyLine}, numberEnemies_{numberEnemies}, reward_{reward} {};

