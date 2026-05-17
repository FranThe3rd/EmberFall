#include <iostream>
#include <string>
#include "TextAnimation.h"
using namespace std;
using std::string;
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
string message = "Cheeseburger";
string welcomeScreen = R"(
___________      ___.                 ___________      .__  .__   
\_   _____/ _____\_ |__   ___________  \_   _____/____  |  | |  |  
 |    __)_ /     \| __ \_/ __ \_  __ \  |    __) \__  \ |  | |  |  
 |        \  Y Y  \ \_\ \  ___/|  | \/  |     \   / __ \|  |_|  |__
/_______  /__|_|  /___  /\___  >__|     \___  /  (____  /____/____/
        \/      \/    \/     \/             \/        \/           
    )";


cout << welcomeScreen;
TextAnimation textAnimation(message);
textAnimation.printMessage();
return 0;
}
