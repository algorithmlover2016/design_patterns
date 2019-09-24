#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_FACTORIES_GUI_FACTORY_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_FACTORIES_GUI_FACTORY_H
#include "../../../../head.h"
#include "../buttons/button.h"
#include "../checkboxes/checkbox.h"

class GUIFactory {
public:
    Button* createButton() = 0;
    Checkbox* createCheckbox() = 0;
};

class MacOSFactory : public GUIFactory {
};

class WindowsFactory : public GUIFactory {
};
#endif
