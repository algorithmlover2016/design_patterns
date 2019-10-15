#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_FACTORY_METHOD_CPP_BUTTONS_BUTTON_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_FACTORY_METHOD_CPP_BUTTONS_BUTTON_H
#include "head.h"

class Button {
public:
    virtual void render() = 0;
    virtual void onClick() = 0;
    virtual ~Button() = 0;
};

class HtmlButton : public Button {
    void render();
    void onClick();
};

class WindowsButton : public Button {
    void render();
    void onClick();
};

#endif
