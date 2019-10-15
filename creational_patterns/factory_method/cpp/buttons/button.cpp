#include "buttons/button.h"

Button::~Button() {
}

void HtmlButton::render() {
    std::cout << "<button>Test html Button</button>" << std::endl;
    onClick();
}

void HtmlButton::onClick() {
    std::cout << "Click! Html Button says - 'Hello World!'" << std::endl;
}

void WindowsButton::render() {
    std::cout << "<button>Test Windows Button</button>" << std::endl;
    onClick();
}

void WindowsButton::onClick() {
    std::cout << "Click! Windows Button says - 'Hello World!'" << std::endl;
}
