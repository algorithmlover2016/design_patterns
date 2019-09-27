#include "factories/gui_factory.h"

GUIFactory::~GUIFactory() {
}

Button* MacOSFactory::createButton() {
    return new MacOSButton();
}

CheckBox* MacOSFactory::createCheckBox() {
    return new MacOSCheckBox();
}

Button* WindowsFactory::createButton() {
    return new WindowsButton();
}

CheckBox* WindowsFactory::createCheckBox() {
    return new WindowsCheckBox();
}

Button* LinuxFactory::createButton() {
    return new LinuxButton();
}

CheckBox* LinuxFactory::createCheckBox() {
    return new LinuxCheckBox();
}
