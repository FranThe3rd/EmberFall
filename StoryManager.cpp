#include "StoryManager.h"
#include <unordered_map>

StoryManager::StoryManager(
    std::string currentRoom,
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms,
    std::string storyName,
    std::string storyline,
    int numberEnemies,
    int reward
)
    : currentRoom_{currentRoom},
      rooms_{rooms},
      storyName_{storyName},
      storyLine_{storyline},
      numberEnemies_{numberEnemies},
      reward_{reward} {}
