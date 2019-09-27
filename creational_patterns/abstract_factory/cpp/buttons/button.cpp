#include "buttons/button.h"

Button::~Button() {
}

void MacOSButton::paint() {
    std::cout << "You have created MacOSButton." << std::endl;
}

void WindowsButton::paint() {
    std::cout << "You have created WindowsButton." << std::endl;
}
