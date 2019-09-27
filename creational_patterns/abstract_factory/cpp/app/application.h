#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_APP_APPLICATION_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_ABSTRACT_FACTORY_CPP_APP_APPLICATION_H
#include "head.h"
#include "checkboxes/checkbox.h"
#include "buttons/button.h"
#include "factories/gui_factory.h"

class Application {
public:
    Application(GUIFactory* factory); 
    void paint();
    ~Application();
private:
    Button* button = nullptr;
    CheckBox* checkbox = nullptr;
};
#endif
