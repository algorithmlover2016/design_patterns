#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_CHECKBOXES_CHECKBOX_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_CHECKBOXES_CHECKBOX_H
#include "../../../../head.h"

class CheckBox {
public:
    virtual void paint() = 0;
};

class MacOSCheckbox : public CheckBox {
public:
};

class WindowsCheckbox : public CheckBox {
public:
};

#endif
