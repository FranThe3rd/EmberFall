#include "GameEngine.h"


GameEngine::GameEngine(bool game) : game_{game} {};


    void GameEngine::gameStart() {
      game_ = true;
    }
    void GameEngine::gameEnd() {
      game_ = false;
    }
