#include "factories/gui_factory.h"

GUIFactory::~GUIFactory() {
}

Button* MacOSFactory::createButton() {
    return new MacOSButton();
}

Checkbox* MacOSFactory::createCheckBox() {
    return new MacOSCheckBox();
}

Button* WindowsFactory::createButton() {
    return new WindowsButton();
}

Checkbox* WindowsFactory::createCheckBox() {
    return new WindowsCheckBox();
}
