#include "./gui_factory.h"

Button* MacOSFactory::createButton() {
    return new MacOSFactory();
}

Checkbox* WindowsFactory::createCheckbox() {
    return new WindowsFactory();
}
