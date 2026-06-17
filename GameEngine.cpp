#include "GameEngine.h"
#include "Player.h"
#include "StoryManager.h"

GameEngine::GameEngine() : game_{false} {}
    bool  GameEngine::isGameRunning() {
      return game_;
    }
    void GameEngine::gameStart() {
      game_ = true;
    }
    void GameEngine::gameEnd() {
      game_ = false;
    }

    void GameEngine::run() {

      while (isGameRunning()) {


      }

    }


