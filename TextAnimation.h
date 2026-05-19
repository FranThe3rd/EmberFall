#pragma once
#include <string>

class TextAnimation {
  public:
    std::string message_;
    TextAnimation(std::string message);
    void printMessage();
};
