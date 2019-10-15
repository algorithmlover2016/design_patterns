#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_FACTORIES_METHOD_CPP_FACTORY_FACTORY_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_FACTORIES_METHOD_CPP_FACTORY_FACTORY_H

#include "head.h"
#include "buttons/button.h"

class Dialog {
public:    
    virtual void renderButton();
    virtual Button* createButton() = 0;
    virtual ~Dialog() = 0;
};

class HtmlDialog : public Dialog {
    Button* createButton();
};

class WindowsDialog : public Dialog {
    Button* createButton();
};

#endif
