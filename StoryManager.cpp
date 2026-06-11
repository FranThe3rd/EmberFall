#include "StoryManager.h"

StoryManager::StoryManager(std::string storyName, std::string storyline, int numberEnemies, int reward)
    : storyName_{storyName},
      storyLine_{storyline},
      numberEnemies_{numberEnemies},
      reward_{reward} {}
