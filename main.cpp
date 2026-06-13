#include <iostream>
#include <string>
#include "TextAnimation.h"
#include "Levels/LevelOne.h"
#include "GameEngine.h"
/*
   Game/
   ├── main.cpp
   ├── Player.h / Player.cpp
   ├── Enemy.h / Enemy.cpp
   ├── Game.h / Game.cpp
   ├── Item.h / Item.cpp
   ├── Inventory.h / Inventory.cpp
   ├── Combat.h / Combat.cpp
   */

int main() {

  // -----------------------------------------------------------------------------------------------------------------------
  std::string introStory = R"(There was once peace, in the world of the embers, but once the war of the great falling
  began, you had no choice and had to fight since you were already included in the draft because of the FAFSA applications.
  Thankfully in this world guns and drone strikes don't exist, so in this world you have no choice but to only fight with 
  basic man made weapons.)";
  std::string welcomeScreen = R"(
___________      ___.                 ___________      .__  .__   
\_   _____/ _____\_ |__   ___________  \_   _____/____  |  | |  |  
 |    __)_ /     \| __ \_/ __ \_  __ \  |    __) \__  \ |  | |  |  
 |        \  Y Y  \ \_\ \  ___/|  | \/  |     \   / __ \|  |_|  |__
/_______  /__|_|  /___  /\___  >__|     \___  /  (____  /____/____/
        \/      \/    \/     \/             \/        \/

    )";


  std::cout << "\n" << welcomeScreen;
  TextAnimation textAnimation(introStory);
  textAnimation.printMessage();

  // -----------------------------------------------------------------------------------------------------------------------


  /*Initialize Levels*/

  /*Game Engine*/










  return 0;
}
