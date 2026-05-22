#include <iostream>
#include <string>
#include "TextAnimation.h"
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
std::string introStory = R"(Welcome to the land of emberfall, where all of the goyims come to destroy your world. With the power
  of burger king and goyslop on yourside, you must find a way to defend yourself from the monsters of destruction)";
std::string welcomeScreen = R"(
___________      ___.                 ___________      .__  .__   
\_   _____/ _____\_ |__   ___________  \_   _____/____  |  | |  |  
 |    __)_ /     \| __ \_/ __ \_  __ \  |    __) \__  \ |  | |  |  
 |        \  Y Y  \ \_\ \  ___/|  | \/  |     \   / __ \|  |_|  |__
/_______  /__|_|  /___  /\___  >__|     \___  /  (____  /____/____/
        \/      \/    \/     \/             \/        \/           
    )";


std::cout << welcomeScreen;
TextAnimation textAnimation(introStory);
textAnimation.printMessage();
return 0;
}
