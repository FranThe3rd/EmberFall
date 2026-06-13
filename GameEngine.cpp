#include "GameEngine.h"


GameEngine::GameEngine() : game_{false} {};
    bool  GameEngine::isGameRunning() {
      return game_;
    }
    void GameEngine::gameStart() {
      game_ = true;
    }
    void GameEngine::gameEnd() {
      game_ = false;
    }


