#include "GameEngine.h"
#include "Player.h"
#include "Enemy.h"
#include "Weapon.h"
#include <iostream>
#include <string>

GameEngine::GameEngine(StoryManager* storyManager)
    : game_{false}, storyManager_{storyManager} {}

bool GameEngine::isGameRunning() {
  return game_;
}

void GameEngine::gameStart() {
  game_ = true;
}

void GameEngine::gameEnd() {
  game_ = false;
}

void GameEngine::run() {
  if (storyManager_ == nullptr) {
    std::cout << "No story loaded.\n";
    return;
  }

  gameStart();
  storyManager_->displayStory();
  std::cout << "\nLocation: " << storyManager_->currentRoom_ << "\n";
  std::cout << storyManager_->rooms_[storyManager_->currentRoom_]["description"] << "\n";

  Weapon starterWeapon("Rusty Sword", 10);
  Player player("Hero", "Human", 100, 18, starterWeapon);

  if (storyManager_->enemies_.empty()) {
    std::cout << "No enemies in this level.\n";
    gameEnd();
    return;
  }

  while (isGameRunning()) {
    Enemy* enemy = nullptr;

    for (Enemy& levelEnemy : storyManager_->enemies_) {
      if (levelEnemy.location_ == storyManager_->currentRoom_ && levelEnemy.health_ > 0) {
        enemy = &levelEnemy;
      }
    }

    std::cout << "\nYour health: " << player.health_;

    if (enemy != nullptr) {
      std::cout << " | " << enemy->name_ << " health: " << enemy->health_;
    }

    std::cout << "\nType attack, a direction, or quit: ";

    std::string choice;
    std::cin >> choice;

    if (choice == "quit") {
      gameEnd();
    } else if (choice == "attack") {
      if (enemy == nullptr) {
        std::cout << "There is no enemy here.\n";
        continue;
      }

      player.attackNow(*enemy);
      std::cout << "You attacked the enemy.\n";

      if (enemy->health_ <= 0) {
        std::cout << "You won and earned " << storyManager_->reward_ << " coins.\n";
        gameEnd();
      } else {
        enemy->attackPlayer(player);
        std::cout << "The enemy attacked you.\n";

        if (player.health_ <= 0) {
          std::cout << "You lost.\n";
          gameEnd();
        }
      }
    } else if (choice != "description" &&
               storyManager_->rooms_[storyManager_->currentRoom_].count(choice) > 0) {
      storyManager_->currentRoom_ = storyManager_->rooms_[storyManager_->currentRoom_][choice];

      std::cout << "\nLocation: " << storyManager_->currentRoom_ << "\n";
      std::cout << storyManager_->rooms_[storyManager_->currentRoom_]["description"] << "\n";
    } else {
      std::cout << "Unknown command.\n";
    }
  }
}
