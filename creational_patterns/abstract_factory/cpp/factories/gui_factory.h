#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_FACTORIES_GUI_FACTORY_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_FACTORIES_GUI_FACTORY_H
#include "head.h"
#include "buttons/button.h"
#include "checkboxes/checkbox.h"

class GUIFactory {
public:
    virtual Button* createButton() = 0;
    virtual CheckBox* createCheckBox() = 0;
    virtual  ~GUIFactory() = 0;
};

class MacOSFactory : public GUIFactory {
    Button* createButton();
    CheckBox* createCheckBox();
};

class WindowsFactory : public GUIFactory {
    Button* createButton();
    CheckBox* createCheckBox();
};

class LinuxFactory : public GUIFactory {
    Button* createButton();
    CheckBox* createCheckBox();
};
#endif
