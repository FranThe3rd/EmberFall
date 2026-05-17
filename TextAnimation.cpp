#include "TextAnimation.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using std::string;
using namespace std;


TextAnimation::TextAnimation(string msg): message{msg} {};


void TextAnimation::printMessage() {
  for (size_t i = 0; i < message.length(); i++) {
    cout << message[i] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(150));
  }
  cout << endl;
}




