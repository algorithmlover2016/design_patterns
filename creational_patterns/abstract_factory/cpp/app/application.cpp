#include "./application.h"

void Application::Application(GUIFactory factory) {
    button = factory.createButton();
    checkbox = factory.createCheckbox();
}

void Application::paint() {
    button.paint();
    checkbox.paint();
}

Application::~Application() {
    // virtual delete ?
}
