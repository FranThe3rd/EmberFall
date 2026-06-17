#pragma once


class GameEngine {
  private:
    bool game_;
  public:
    GameEngine();
    bool isGameRunning();
    void gameStart();
    void gameEnd();
    void run();
};
