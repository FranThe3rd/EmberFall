#include "StoryManager.h"
#include <unordered_map>
#include <vector>

StoryManager::StoryManager(
    std::string currentRoom,
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms,
    std::string storyName,
    std::string storyline,
    std::vector<Enemy> enemies,
    int reward
)
    : currentRoom_{currentRoom},
      rooms_{rooms},
      storyName_{storyName},
      storyLine_{storyline},
      enemies_{enemies},
      numberEnemies_{static_cast<int>(enemies_.size())},
      reward_{reward} {}
