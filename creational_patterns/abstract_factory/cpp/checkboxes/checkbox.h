#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_CHECKBOXES_CHECKBOX_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_CHECKBOXES_CHECKBOX_H
#include "../../../../head.h"

class CheckBox {
public:
    virtual void paint() = 0;
    virtual ~CheckBox() = 0;
};

class MacOSCheckBox : public CheckBox {
public:
};

class WindowsCheckBox : public CheckBox {
public:
};

#endif
