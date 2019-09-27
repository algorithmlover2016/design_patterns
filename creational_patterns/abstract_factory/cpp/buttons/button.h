#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_BUTTONS_BUTTON_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_BUTTONS_BUTTON_H
#include "head.h"

class Button {
public:
    virtual void paint() = 0;
    virtual ~Button() = 0;
};

class MacOSButton : public Button {
    void paint();
};

class WindowsButton : public Button {
    void paint();
};

class LinuxButton : public Button {
    void paint();
};

#endif
