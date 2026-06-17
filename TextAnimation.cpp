#include "TextAnimation.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

TextAnimation::TextAnimation(std::string message): message_{message} {};


void TextAnimation::printMessage() {
  for (size_t i = 0; i < message_.length(); i++) {
    std::cout << message_[i] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }
  std::cout << std::endl;
}




