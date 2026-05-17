#pragma once
#include <string>
using std::string;

class TextAnimation {
  public:
    string message;
    TextAnimation(string msg);
    void printMessage();
};
