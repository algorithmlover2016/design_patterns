#include "app/application.h"

Application::Application(GUIFactory* factory) {
    if (nullptr == factory) {
        std::cout << "unknow system lead to nullptr factory" << std::endl;
        return ;
    }
    button = factory->createButton();
    checkbox = factory->createCheckBox();
}

void Application::paint() {
    if (nullptr == button) {
        std::cout << "unknow system leading to nullptr button" << std::endl;
        return ;
    }

    if (nullptr == checkbox) {
        std::cout << "unknow system leading to nullptr checkbox" << std::endl;
        return ;
    }
    button->paint();
    checkbox->paint();
}

Application::~Application() {
    if (nullptr != button) {
        delete button;
    }
    if (nullptr != checkbox) {
        delete checkbox;
    }
}
