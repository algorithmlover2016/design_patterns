#include "app/application.h"

void Application::Application(GUIFactory factory) {
    button = factory.createButton();
    checkbox = factory.createCheckBox();
}

void Application::paint() {
    button.paint();
    checkbox.paint();
}

Application::~Application() {
    // virtual delete ?
}
