#include "LevelOne.h"
#include <unordered_map>
LevelOne::LevelOne(
    std::string currentRoom,
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> rooms,
    std::string storyName,
    std::string storyline,
    int numberEnemies,
    int reward
)
    : StoryManager(currentRoom, rooms, storyName, storyline, numberEnemies, reward) {}
