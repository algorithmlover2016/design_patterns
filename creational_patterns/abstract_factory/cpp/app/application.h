#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_APP_APPLICATION_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_APP_APPLICATION_H
#include "../../../../head.h"
#include "checkboxes/checkbox.h"
#include "buttons/button.h"
class Application {
public:
    void Application(GUIFactory factory); 
    void paint();
    ~Application();
private:
    Button* button;
    CheckBox* checkbox;
};
#endif
